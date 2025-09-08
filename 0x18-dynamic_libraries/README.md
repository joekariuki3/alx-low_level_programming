# 0x18. C - Dynamic libraries

Create and use shared libraries (`.so`) at compile and runtime.

## Learning Objectives
- Compile position-independent code (PIC)
- Build shared libraries with `gcc -fPIC -shared`
- Load at runtime with `LD_LIBRARY_PATH` or `dlopen`

## Build
```
gcc -fPIC -c *.c
gcc -shared -o libmylib.so *.o
```

## Link
```
gcc main.c -L. -lmylib -o prog
LD_LIBRARY_PATH=. ./prog
```
