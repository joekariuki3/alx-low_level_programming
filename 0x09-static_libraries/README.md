# 0x09. C - Static libraries

Create and use static libraries to bundle reusable code.

## Learning Objectives
- Compile object files without linking
- Create static libraries with `ar` and `ranlib`
- Link static libraries when building programs

## Commands
```
gcc -c *.c               # compile to .o
ar rcs libmylib.a *.o    # create archive
ranlib libmylib.a        # index (often done by ar rcs)
```

## Linking
```
gcc main.c -L. -lmylib -o prog
```
