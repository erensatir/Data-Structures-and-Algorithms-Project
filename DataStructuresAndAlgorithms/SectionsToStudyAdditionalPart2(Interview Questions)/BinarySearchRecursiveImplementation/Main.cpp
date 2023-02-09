#include "BinarySearch.h"
#include <iostream>
using namespace std;

int main() {

    BinarySearch mtry;

    int x; //Receive the number with cin
    int A[] = {2,4,5,7,13,14,15,23};
    int low = 0;
    int high = 8-1; //Array length - 1
    cout << "Enter a number: " ;
    cin >> x;
    int index = mtry.BinarySearchRecursive(A,low,high,x);
    if(index != -1){
        cout << "Number " << x <<" is at index " << index << endl;
    }
    else {
        cout << "Number not found" << endl;
    }

    return 0;
}