#include "InsertionSortAlgorithm.h"
#include <iostream>
using namespace std;

int main() {

    InsertionSortAlgorithm mtry;

    int arr[] = {12,11,13,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    mtry.insertionSort(arr,n);
    //Expected Result: 5,6,11,12,13
    mtry.PrintArray(arr,n);

    return 0;
}