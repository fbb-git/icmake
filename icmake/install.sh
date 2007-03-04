#/bin/bash

pickup()
{
    grep "define $1" def/destinations | sed 's,[^"]*\"\([^"]*\).*,\1,'
}

inst()
{
    mkdir -p $2
    echo cp bin/$1 $2
    cp bin/$1 $2 
}

inststrip()
{
    inst $1 $2
    strip $2/$1
}

instscript()
{
    sed '
s,!BINDIR,!'${BINDIR}',
' scripts/$2/$1 > $2/$1
    chmod +x $2/$1
}


BINDIR=`pickup BINDIR`

inststrip icmake $BINDIR
inststrip icmun  $BINDIR

LIBDIR=`pickup LIBDIR`

inststrip icm-pp   $LIBDIR
inststrip icm-comp $LIBDIR
inststrip icm-exec $LIBDIR

inst icmbuild $BINDIR
inst icmstart $BINDIR

instscript unix .
for x in . comp exec make pp rss un
do
    instscript build $x
done




