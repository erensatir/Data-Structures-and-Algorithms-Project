#include "MergeSortAlgorithm.h"
#include <iostream>
using namespace std;

int main() {

    MergeSortAlgorithm mtry;

    int arr[] = {6,5,12,10,9,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    mtry.mergeSort(arr,0,size-1);
    cout << "Sorted array: " << endl;
    mtry.PrintArray(arr,size);

    return 0;
}