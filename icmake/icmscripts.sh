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
SKELDIR=`pickup SKELDIR`
BINDIR=`pickup BINDIR`

echo Creating icmbuild from skeleton
instscript icmbuild $BINDIR  $SKELDIR bin

echo Creating icmstart from skeleton
instscript icmstart $BINDIR  $SKELDIR bin
