

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

/**********************************
*
*              Heap Sort
*
***********************************
*/
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

void heapSort(int32_t *A,uint32_t sizeA)
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

/**********************************
*
*              Insertion Sort
*
***********************************
*/
void insertionSort(int32_t *A,uint32_t sizeA)
{
    for (int i = 1; i < sizeA; i++)
    {
        int key = A[i];
        int j = i - 1;
        while ( j >= 0 && A[j] > key )
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}
/**********************************
*
*              Selection Sort
*
***********************************
*/
void selectionSort(int32_t *A,uint32_t sizeA)
{
    for (int i = 0; i < sizeA - 1; i++)
    {
    	unsigned int min = A[i];
    	unsigned int index_min = i;
        for (int j = i + 1; j < sizeA; j++)
        {
            if (A[j] < min)
            {
                index_min = j;
                min = A[j];
            }
        }
        //Swap
        unsigned int temp = A[i];
        A[i] = A[index_min];
        A[index_min] = temp;
    }
}

/**********************************
*
*              Merge Sort
*
***********************************
*/

void mergeSort(int32_t *A,uint32_t sizeA)
{
    mergeRecurv(A,1,sizeA);
}
void mergeRecurv(int32_t *A,uint32_t p,uint32_t r)
{
    static uint32_t q;

    if(p < r)
    {
        q = floor((p + r) / 2);
        mergeRecurv(A,p,q);
        mergeRecurv(A,q + 1,r);
        merge(A,p,q,r);
   }
}

void merge(uint32_t p,uint32_t q,uint32_t r)
{
    uint32_t n1 = q - p + 1;
    uint32_t n2 = r - q;
    int32_t L[n1+1],R[n2 + 1];
    uint32_t i,j,k;

    for(i = 0;i < n1; i = i + 1)
        L[i] = A[p + i - 1];

    for(j = 0; j < n2; j = j + 1)
        R[j] = A[q + j];

    L[n1 + 1] = NULL;
    R[n2 + 1] = NULL;

    i = 1;
    j = 1;

    for(k = p; k <= r)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else if (A[k] = R[j])
            j++;
        else
            //Impossible combination
    }
}

