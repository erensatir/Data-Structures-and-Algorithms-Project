#include "BubbleSortAlgorithm.h"
#include <iostream>
using namespace std;

int main() {

    BubbleSortAlgorithm mtry;

    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    mtry.BubbleSort(arr,n);
    cout << "Sorted array: " << endl;
    mtry.PrintArray(arr,n);
    //Expected result = 11,12,22,25,34,64,90

    return 0;
}