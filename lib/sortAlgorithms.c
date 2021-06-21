

/*
*   input: a pointer to an unsorted array
*   ouput: during algorithm execution unsorted array is sorted by using a pointer to char
*/

#include "sortAlgorithms.h"

void swap(int32_t *A,uint32_t i, int32_t j)
{
    int32_t temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
void maxHeapify(int32_t *A,int32_t i)
{
    int32_t largest;
    uint32_t l,r;

    l = LEFT(i);
    r = RIGHT(i);

    if(l <= heapSize && A[l] > A[i])
        largest = l;
    else
        largest = i;
    if(r <= heapSize && A[r] > A[largest])
        largest = r;
    if(largest != i)
    {
       //swap A[i] with A[largest]
       swap(A,i,largest);
       maxHeapify(A,largest);
    }
}
void buildMaxHeap(int32_t *A)
{
    int32_t i;
    for(i = floor(heapSize/2);i >= 0;i-- )
         maxHeapify(A,i);
}

void heapSort(int32_t *A, uint32_t sizeA)
{
    heapSize = sizeA;
    int32_t i;
    buildMaxHeap(A);
    for(i = sizeA; i >= 1;i--)
    {
        swap(A,0,i);
        heapSize--;
        maxHeapify(A,0);
    }
}
