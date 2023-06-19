#!/bin/bash
gcc -shared -fPIC $(find . -maxdepth 1 -type f -name "*.c") -o liball.so
