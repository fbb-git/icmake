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
    strip $2/$1
}

instscript()
{
    sed '
s,!/usr/bin,!'$2',
s,"/usr/share/icmake","'$3'",
' scripts/$1 > $2/$1
}


BINDIR=`pickup BINDIR`

inst icmake $BINDIR
inst icmun  $BINDIR

LIBDIR=`pickup LIBDIR`

inst icm-pp   $LIBDIR
inst icm-comp $LIBDIR
inst icm-exec $LIBDIR

SKELDIR=`pickup SKELDIR`

instscript icmbuild $BINDIR $SKELDIR
instscript icmstart $BINDIR $SKELDIR
