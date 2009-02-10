
echo "
    This script assumes that the GCC compiler is available, and that
    the function glob() is available in the gcc-runtime library.
    If that's not the case, remove the -DHAVE_GLOB define from the 
    gcc flags.

    Furthermore, it assumes that the parser files parser.c and parser.h have
    already been generated from the file parser and that the file lexer.c has
    already been generated from the file lexer.
"                                     

pickup()
{
    grep -v '^[[:space:]]*//' def/destinations | grep "define $1" |
                                    sed 's,[^"]*\"\([^"]*\).*,\1,'
}

instscript()
{
    sed '
s,!/usr/bin,!'$2',
s,"/usr/share/icmake","'$3'",
s,\([^[:space:]]\)//\([^[:space:]]\),\1/\2,
' usr/bin/$1 > tmp/$2/$1
    chmod +x tmp/$2/$1

    echo installed tmp/$2/$1
}

try()
{
    $* || exit 1
}

EXT=`pickup EXTENSION`
BIN=`pickup BINDIR`
LIB=`pickup LIBDIR`
SKEL=`pickup SKELDIR`
MAN=`pickup MANDIR`

echo Creating the intermediate destination directory ./tmp
rm -rf tmp
mkdir -p tmp/${BIN} tmp/${LIB}  tmp/${SKEL} tmp/${MAN}

echo    Writing the support file tmp/version.h
echo "#define VERSION \"`grep VERSION VERSION | tr -d [A-Z=]`\"" > tmp/version.h
echo "#define YEARS \"`grep YEARS VERSION | tr -d [A-Z=]`\"" >> tmp/version.h

echo Creating tmp/libicrss.a
cd rss
echo gcc -c -O2 -g -Wall -DHAVE_GLOB '*.c'
try gcc -c -O2 -g -Wall -DHAVE_GLOB *.c
ar rs ../tmp/libicrss.a *.o
rm *.o
cd ..

echo Creating tmp/${BIN}/icmake${EXT}
cd make
try gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${BIN}/icmake${EXT} *.c ../tmp/libicrss.a
try gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${BIN}/icmake${EXT} *.c ../tmp/libicrss.a
cd ..

echo Creating tmp/${BIN}/icmun${EXT}
cd un
echo gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${BIN}/icmun${EXT} '*.c' ../tmp/libicrss.a
gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${BIN}/icmun${EXT} *.c ../tmp/libicrss.a
cd ..  

echo Creating tmp/${LIB}/icm-pp${EXT}
cd pp
echo gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${LIB}/icm-pp${EXT} '*.c' ../tmp/libicrss.a
try gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${LIB}/icm-pp${EXT} *.c ../tmp/libicrss.a
cd ..

echo Creating tmp/${LIB}/icm-comp${EXT}
cd comp
echo gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${LIB}/icm-comp${EXT} '*.c' ../tmp/libicrss.a
try gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${LIB}/icm-comp${EXT} *.c ../tmp/libicrss.a
cd ..

echo Creating tmp/${LIB}/icm-exec${EXT}
cd exec
echo 'gcc -O2 -g -Wall -DHAVE_GLOB -c *.c'
try gcc -O2 -g -Wall -DHAVE_GLOB -c *.c 
for x in auks var virtual int list string stack opcodefun builtin
do
    echo cd $x
    cd $x
    echo 'gcc -O2 -g -Wall -DHAVE_GLOB -c *.c'
    try gcc -O2 -g -Wall -DHAVE_GLOB -c *.c
    cd ..
done
echo gcc -o ../tmp/${LIB}/icm-exec$1 '*.o */*.o' ../tmp/libicrss.a
gcc -o ../tmp/${LIB}/icm-exec$1 *.o */*.o ../tmp/libicrss.a
rm *.o */*.o
cd ..

echo Creating icmbuild from ./usr/bin/icmbuild
instscript icmbuild $BIN  $SKEL

echo Creating icmstart from ./usr/bin/icmstart
instscript icmstart $BIN  $SKEL

echo Copying the skeleton files in usr/share/icmake/
cp -r usr/share/icmake/* tmp/${SKEL}

echo Copying the man-pages in doc/
cp doc/*.1 tmp/${MAN}

rm -f tmp/lib* tmp/version.h

echo Done.
