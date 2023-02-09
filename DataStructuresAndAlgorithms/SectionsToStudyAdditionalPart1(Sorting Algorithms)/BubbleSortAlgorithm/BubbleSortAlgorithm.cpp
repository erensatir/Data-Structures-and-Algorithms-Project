#include "BubbleSortAlgorithm.h"
#include <iostream>
using namespace std;

void BubbleSortAlgorithm::swap(int *xprt, int *yptr) {
    int temp = *xprt;
    *xprt = *yptr;
    *yptr = temp;
}

void BubbleSortAlgorithm::BubbleSort(int arr[], int n) {
     int i,j;
     for(i=0;i < n-1; i++){
         //Last i elements are already in place
         for(j=0;j < n-i-1;j++){
             if(arr[j] > arr[j+1]){
                 swap(&arr[j],&arr[j+1]);
             }
         }
     }
}

void BubbleSortAlgorithm::PrintArray(int *arr, int size) {
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
