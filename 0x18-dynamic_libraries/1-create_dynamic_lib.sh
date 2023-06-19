#!/bin/bash
gcc -c -Wall -Wextra -pedantic -fpic *.c
gcc -shared -o liball.so *.o
