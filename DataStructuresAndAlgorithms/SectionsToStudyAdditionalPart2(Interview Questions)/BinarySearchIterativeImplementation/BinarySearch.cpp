#include <iostream>
using namespace std;

class BinarySearch {
public:
    int BinarySearchFunction(int A[],int n,int x);
};

int BinarySearch::BinarySearchFunction(int *A, int n, int x) {
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(x == A[mid]) {return mid;} //Found X, return (exit)
        else if (x < A[mid]) {high = mid-1;} // X lies before mid
        else {
            low = mid + 1; //X lies after mid
        }
    }
    return -1;
}