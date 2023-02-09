#include "QuickSortAlgorithm.h"
#include <iostream>
using namespace std;

int QuickSortAlgorithm::Partition(int *A, int start, int end) {
    int pivot = A[end];
    int partitionIndex = start; // set partition index as start initially
    for(int i = start;i<end;i++){
        if (A[i]<=pivot){
            swap(A[i],A[partitionIndex]); //swap if element is lesser than pivot
            partitionIndex++;
        }
    }
    swap(A[partitionIndex],A[end]); //swap pivot with element at partition index
    return partitionIndex;
}

void QuickSortAlgorithm::QuickSort(int *A, int start, int end) {

    if(start < end){
        int partitionIndex = Partition(A,start,end); // calling partition
        QuickSort(A,start,partitionIndex-1);
        QuickSort(A,partitionIndex+1,end);
    }
}