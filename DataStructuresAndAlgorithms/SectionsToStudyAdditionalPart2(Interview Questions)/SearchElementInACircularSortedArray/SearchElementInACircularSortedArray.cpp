#include "SearchElementInACircularSortedArray.h"
#include <iostream>
using namespace std;

int SearchElementInACircularSortedArray::CircularArraySearch(int *A, int n, int x) {
    int low = 0, high = n-1;
    while(low <= high){
        int mid =(high+low)/2;
        if(x == A[mid]){
            return mid; //Case 1: Found X
        }
        if(A[mid] <= A[high]){ //Case 2: right half is sorted
            if(x > A[mid] && x<= A[high]){
                low = mid + 1; // go searching in right sorted half
            }
            else {
                high = mid - 1;
            }
        }
        else { //Case 3: left half is sorted
            if(A[low] <= x && x < A[mid]){ // go searching in left sorted half
                high = mid-1;
            }
            else {
                low = mid+1; // go searching right
            }
        }
    }
    return -1; //No x found
}