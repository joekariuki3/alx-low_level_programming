#ifndef SEARCH_ALGO
#define SEARCH_ALGO

/* headerts */
#include<stdio.h>
#include<math.h>

/* prototypes */
int linear_search(int *array, size_t size, int value);
void printInteger(int num);
int binary_search(int *array, size_t size, int value);
void printArray(int *array, size_t newSize);
int jump_search(int *array, size_t size, int value);
void printString(int num, int *array);
void printStringB(int num, int *array, int size);
void printFound(size_t lowwer, size_t upper);
int interpolation_search(int *array, size_t size, int value);
/*  functions */

#endif
