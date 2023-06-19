#!/bin/bash
gcc -fPIC -c *.c
gcc -shared *.o -o liball.so
export LD_LIBLARY_PATH=./liball.so
