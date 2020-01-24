#!/bin/bash

cd
cd ivc
mv .iv3 $PREFIX/libexec
cd $PREFIX/libexec
chmod 777 .iv3
cd
if [ -x $PREFIX/libexec/.datc ];then
cd
else
cd 
cd ivc
chmod 777 .datc
mv .datc $PREFIX/libexec
fi
