
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
    grep "define $1" def/destinations | sed 's,[^"]*\"\([^"]*\).*,\1,'
}

instscript()
{
    sed '
s,!/usr/bin,!'$2',
s,"/usr/share/icmake","'$3'",
' scripts/$1 > $4/$1
    chmod +x $4/$1
}


EXT=`pickup EXTENSION`

echo    Building the runtime-library in ./rss
cd rss
gcc -c -O2 -g -Wall -DHAVE_GLOB *.c
ar rs libicrss.a *.o
rm *.o
cd ..

echo Creating the target directory ./bin
mkdir -p bin

echo Creating icmake
cd make
gcc -O2 -g -Wall -DHAVE_GLOB -o ../bin/icmake${EXT} *.c ../rss/libicrss.a

echo Creating icm-pp
cd ../pp
gcc -O2 -g -Wall -DHAVE_GLOB -o ../bin/icm-pp${EXT} *.c ../rss/libicrss.a

echo Creating icm-comp
cd ../comp
gcc -O2 -g -Wall -DHAVE_GLOB -o ../bin/icm-comp${EXT} *.c ../rss/libicrss.a

echo Creating icm-exec from exec/bootstrap
cd ../exec
sh bootstrap ${EXT}
mv tmp/bin/icm-exec${EXT} ../bin

echo Creating icmun
cd ../un
gcc -O2 -g -Wall -DHAVE_GLOB -o ../bin/icmun${EXT} *.c ../rss/libicrss.a
cd ..  

SKELDIR=`pickup SKELDIR`
BINDIR=`pickup BINDIR`

echo Creating icmbuild from skeleton
instscript icmbuild $BINDIR  $SKELDIR bin

echo Creating icmstart from skeleton
instscript icmstart $BINDIR  $SKELDIR bin

echo "
    Done.
"
