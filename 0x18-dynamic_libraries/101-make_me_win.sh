#!/bin/bash
echo "int rand() { return <WINNING_NUMBER>; }" > rand.c
gcc -shared -o rand.so -fPIC rand.c
export LD_PRELOAD=$PWD/rand.so

