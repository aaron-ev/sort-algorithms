
#ifndef SORT_ALGORITHMS_H
#define SORT_ALGORITHMS_H

#include "stdint.h"
#include "math.h"
#include "limits.h"
void swap(int32_t *A,uint32_t i, int32_t j);

/**********************************
*
*              Heap Sort
*
***********************************
*/

#define PARENT(i)   floor(i/2)
#define LEFT(i)     2*i + 1
#define RIGHT(i)    2*i + 2

uint32_t heapSize;
void maxHeapify(int32_t *A,int32_t i);
void buildMaxHeap(int32_t *A);
void heapSort(int32_t *A,uint32_t sizeA);


/**********************************
*
*              Insertion Sort
*
***********************************
*/

void insertionSort(int32_t *A,uint32_t sizeA);

/**********************************
*
*              Selection Sort
*
***********************************
*/

void selectionSort(int32_t *A,uint32_t sizeA);

/**********************************
*
*              Merge Sort
*
***********************************
*/

void mergeSort(int32_t *A,uint32_t sizeA);
void mergeRecurv(int32_t *A,uint32_t p,uint32_t r);
void mergee(int32_t *A,uint32_t p,uint32_t q,uint32_t r);
#endif // SORT_ALGORITHMS_H
