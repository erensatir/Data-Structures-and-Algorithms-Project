#include <iostream>
#include "BinarySearch.h"
using namespace std;


int BinarySearch::BinarySearchRecursive(int *A, int low, int high, int  x) {
    if(low > high) {return -1;}
    int mid = low + (high-low)/2;
    if(x == A[mid]) {return mid;} //Found X, return(exit);
    else if(x < A[mid]) {return BinarySearchRecursive(A,low,mid-1,x);}
    else {
        return BinarySearchRecursive(A,mid+1,high,x);
    }
}

