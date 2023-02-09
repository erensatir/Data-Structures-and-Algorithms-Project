#include "HowManyTimesIsASortedArrayRotated.h"
#include <iostream>
using namespace std;

int HowManyTimesIsASortedArrayRotated::FindRotationCount(int *A, int n) {
    int low = 0;
    int high = n-1;
    while(low<=high){
        if(A[low] <= A[high]){
            return low; //Case 1
        }
        int mid = (low+high)/2;
        int next = (mid+1)%n, prev = (mid+n-1)%n;
        if(A[mid] <= A[next] && A[mid] <= A[prev]){ //Case 2
            return mid;
        }
        else if(A[mid] <= A[high]){
            high = mid -1; // Case 3
        }
        else if(A[mid] >= A[low]){
            low = mid+1; // Case 4
        }
    }
    return -1;
}
