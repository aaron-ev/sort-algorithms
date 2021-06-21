
#ifndef SORT_ALGORITHMS_H
#define SORT_ALGORITHMS_H

/**********************************
*
*              Heap Sort
*
***********************************
*/
#include "stdint.h"
#include "math.h"

#define PARENT(i)   floor(i/2)
#define LEFT(i)     2*i + 1
#define RIGHT(i)    2*i + 2


uint32_t heapSize;

void swap(int32_t *A,uint32_t i, int32_t j);
void maxHeapify(int32_t *A,int32_t i);
void buildMaxHeap(int32_t *A);
void heapSort(int32_t *A,uint32_t heapSize);

#endif // SORT_ALGORITHMS_H
