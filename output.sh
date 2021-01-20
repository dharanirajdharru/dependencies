#!/bin/sh
git pull origin dependencies
CC=gcc
rm -rf *.o main
$CC -c main.c -o main.o
$CC -c insertion.c -o insertion.o
$CC -c bubble.c -o bubble.o
$CC -c selection.c -o selection.o
$CC -c quick.c -o quick.o
$CC -c merge.c -o merge.o
$CC  main.o insertion.o bubble.o selection.o quick.o  merge.o -o main
echo "samples"
/home/dharani/github2/main 0 4 2 3 5 7 9 10
/home/dharani/github2/main 0 1 9 8 7 6 5 4 
#/home/dharani/github2/main 0 0 0

rm *.o main

