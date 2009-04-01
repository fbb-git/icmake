
echo "
    This script assumes that the GCC compiler is available, and that
    the function glob() is available in the gcc-runtime library.
    If that's not the case, remove the -DHAVE_GLOB define from the 
    gcc flags.

    Furthermore, it assumes that the parser files parser.c and parser.h have
    already been generated from the file parser and that the file lexer.c has
    already been generated from the file lexer.
"                                     

. conversions

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

echo Creating the intermediate destination directory ./tmp
rm -rf tmp
mkdir -p tmp/${BINDIR}  tmp/${LIBDIR}      tmp/${SKELDIR} \
         tmp/${CONFDIR} tmp/${MANDIR}/man1 tmp/${MANDIR}/man7

echo    Writing the support file tmp/version.h
echo "#define VERSION \"${VERSION}\"" > tmp/version.h
echo "#define YEARS \"${YEARS}\"" >> tmp/version.h

echo Creating tmp/libicrss.a
cd rss
echo gcc -c -O2 -g -Wall -DHAVE_GLOB '*.c'
try gcc -c -O2 -g -Wall -DHAVE_GLOB *.c
ar rs ../tmp/libicrss.a *.o
rm *.o
cd ..


echo Creating tmp/${BINDIR}/icmake${EXTENSION}
cd make
try gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${BINDIR}/icmake${EXTENSION} *.c ../tmp/libicrss.a
try gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${BINDIR}/icmake${EXTENSION} *.c ../tmp/libicrss.a
cd ..

echo Creating tmp/${BINDIR}/icmun${EXTENSION}
cd un
echo gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${BINDIR}/icmun${EXTENSION} '*.c' ../tmp/libicrss.a
gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${BINDIR}/icmun${EXTENSION} *.c ../tmp/libicrss.a
cd ..  

echo Creating tmp/${LIBDIR}/icm-pp${EXTENSION}
cd pp
echo gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${LIBDIR}/icm-pp${EXTENSION} '*.c' ../tmp/libicrss.a
try gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${LIBDIR}/icm-pp${EXTENSION} *.c ../tmp/libicrss.a
cd ..

echo Creating tmp/${LIBDIR}/icm-comp${EXTENSION}
cd comp
echo gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${LIBDIR}/icm-comp${EXTENSION} '*.c' ../tmp/libicrss.a
try gcc -O2 -g -Wall -DHAVE_GLOB -o ../tmp/${LIBDIR}/icm-comp${EXTENSION} *.c ../tmp/libicrss.a
cd ..

echo Creating tmp/${LIBDIR}/icm-exec${EXTENSION}
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
echo gcc -o ../tmp/${LIBDIR}/icm-exec$1 '*.o */*.o' ../tmp/libicrss.a
gcc -o ../tmp/${LIBDIR}/icm-exec$1 *.o */*.o ../tmp/libicrss.a
rm *.o */*.o
cd ..

echo Creating icmbuild from ./usr/bin/icmbuild
./convert usr/bin/icmbuild tmp/$BINDIR icmbuild

echo Creating icmstart from ./usr/bin/icmstart
./convert usr/bin/icmstart tmp/$BINDIR icmstart

echo Copying the skeleton files in usr/share/icmake/
cp -r usr/share/icmake/* tmp/${SKELDIR}

echo Copying the configuration files in etc/icmake/
cp -r etc/icmake/* tmp/${CONFIGDIR}

echo Copying the man-pages in doc/
cp doc/*.1 tmp/${MANDIR}/man1

rm -f tmp/lib* tmp/version.h

echo Done.
