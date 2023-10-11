#ifndef SEARCH_ALGO
#define SEARCH_ALGO

/* headerts */
#include<stdio.h>
#include<math.h>

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printArray(int *array, size_t newSize);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
#endif
