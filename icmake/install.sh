#/bin/bash

pickup()
{
    grep -v '^[[:space:]]*//' def/destinations | grep "define $1" |
                                    sed 's,[^"]*\"\([^"]*\).*,\1,'
}

if [ $1 == strip ] 
then
    shift
    CWD=`pwd`
    BIN=`pickup BINDIR`
    cd tmp/$BIN
    strip icmake icmun
    cd $CWD
    LIB=`pickup LIBDIR`
    cd $LIB
    strip *
    cd $CWD
fi

if [ $1 == "" ] ; then
    echo Usage: $0 [strip] destination-directory
    exit 1
fi

(cd tmp; tar cf - *) | (cd $1; tar xf -)
