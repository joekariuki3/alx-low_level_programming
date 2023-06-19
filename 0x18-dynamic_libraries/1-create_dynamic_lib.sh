#!/bin/bash
gcc -fPIC -c *.c
gcc -shared *.o -o liball.so
LD_LIBLARY_PATH=./liball.so
