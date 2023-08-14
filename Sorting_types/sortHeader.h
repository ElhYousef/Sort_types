#ifndef _SORTHEADER
#define _SORTHEADER

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void get_array(int array[], int length);
void print_array(int array[], int length);
void do_bubbleSorting(int *array, int length);
void do_InsertionSorting(int *array, int length);
void do_selectionSorting(int *array, int length);
void do_quickSorting(int firstIndex, int endIndex, int *array);
void do_ShellSorting(int *array, int length);
int min1(int *array, int length);
int max1(int* array, int length);
void do_bucketSorting(int *array, int length);


void make_Buckets(int* array_index, int* array, int length, int m, int array2[m][length]);
void make_Buckets_poinVer1(int* array_index, int* array, int length, int m, int* array2);//OK
void make_Buckets_poinVer2(int* array_index, int* array, int length, int m, int* array2[]);

void print_array2d(int m, int length, int array2[m][length], int* array_index);
void gather_array(int m, int length, int array2[m][length], int* array_index, int* array);

#endif

