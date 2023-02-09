#include "SelectionSortAlgorithm.h"
#include <iostream>
using namespace std;

void SelectionSortAlgorithm::SelectionSort(int *A, int n) {
    for(int i = 0; i < n-1 ; i++ ){
        //we need to do n-2 passes
        int iMin = i; //i'th position: elements from i till n-1 are candidates
        for(int j = i+1;j<n;j++){
            if(A[j] < A[iMin]){
                iMin = j;
            }
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}