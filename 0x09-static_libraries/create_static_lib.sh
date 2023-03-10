#!/bin/bash
gcc -c *.c -I.
ar rc liball.a  *.o
