#include <stdio.h>
#include <stdlib.h>

#define SIZE_A 10
#include "sortAlgorithms.h"
int main()
{
    float A[SIZE_A] = {8,8,8,8,0,0,0,2,1,0};
    heapSort(A,SIZE_A-1);
    float B[SIZE_A] = {8,8,8,8,0,0,0,2,1,0};
    insertionSort(B,SIZE_A);
    float C[SIZE_A] = {8,8,8,8,0,0,0,2,1,0};
    selectionSort(C,SIZE_A);
    float D[SIZE_A] = {8,8,8,8,0,0,0,2,1,0};
    mergeSort(D,SIZE_A);
    float E[SIZE_A] = {8,8,8,8,0,0,0,2,1,0};
    bubbleSort(E,SIZE_A);
    return 0;
}
