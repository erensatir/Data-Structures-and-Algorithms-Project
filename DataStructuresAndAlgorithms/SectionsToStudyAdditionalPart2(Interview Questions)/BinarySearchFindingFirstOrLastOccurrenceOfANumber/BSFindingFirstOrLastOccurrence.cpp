#include <iostream>
#include "BSFindingFirstOrLastOccurrence.h"
using namespace std;

int BSFindingFirstOrLastOccurrence::BinarySearchFirstOccurrence(int *A, int n, int x) {
    int low = 0;
    int high = n-1;
    int result = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(x == A[mid]) {
            result = mid;
            high = mid-1;
        }
        else if (x < A[mid]) {
            high = mid-1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int BSFindingFirstOrLastOccurrence::BinarySearchLastOccurrence(int *A, int n, int x) {
    int low = 0;
    int high = n-1;
    int result = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(x == A[mid]) {
            result = mid;
            low = mid+1;
        }
        else if (x < A[mid]) {
            high = mid-1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}