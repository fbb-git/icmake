#/bin/bash

pickup()
{
    grep -v '^[[:space:]]*//' def/destinations | grep "define $1" |
                                    sed 's,[^"]*\"\([^"]*\).*,\1,'
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
EXT=`pickup EXTENSION`

inststrip icmake${EXT} $BINDIR
inststrip icmun${EXT}  $BINDIR

LIBDIR=`pickup LIBDIR`

inststrip icm-pp${EXT}   $LIBDIR
inststrip icm-comp${EXT} $LIBDIR
inststrip icm-exec${EXT} $LIBDIR

inst icmbuild $BINDIR
inst icmstart $BINDIR

instscript unix .

for x in . comp exec make pp rss un
do
    instscript build $x
done
