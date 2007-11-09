#/bin/bash

STRIP=$#

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
    if [ ${STRIP} -ne 0 ] 
    then
        strip bin/$1
    fi
    inst $1 $2
}

instscript()
{
    sed '
s,!BINDIR,!'${BINDIR}',
' scripts/$2/$1 > $2/$1
    chmod +x $2/$1
}

BINDIR=`pickup BINDIR`
LIBDIR=`pickup LIBDIR`
EXT=`pickup EXTENSION`

inststrip icmake${EXT} $BINDIR
inststrip icmun${EXT}  $BINDIR

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
