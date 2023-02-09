#include "CountOccurrencesOfANumberInSortedArrayWithBS.h"
#include <iostream>
using namespace std;

int main() {

    CountOccurrencesOfANumberInSortedArrayWithBS mtry;

    int A[] ={1,1,3,3,5,5,5,5,5,9,9,11};
    int arrayLength = sizeof(A)/sizeof(A[0]);
    int x;
    cout << "Enter a number: " << endl;
    cin >> x;
    int firstIndex = mtry.BinarySearch(A,sizeof(A)/sizeof(A[0]),x, true);
    if(firstIndex == -1){
        cout << "Count of " << x << " is "<< firstIndex << " times" << endl;
    }
    else{
        int lastIndex = mtry.BinarySearch(A,sizeof(A)/sizeof(A[0]),x,false);
        cout << "Count of " << x << " is "<< (lastIndex-firstIndex+1) << " times" << endl;
    }
    return 0;
}