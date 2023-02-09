#include "SearchElementInACircularSortedArray.h"
#include <iostream>
using namespace std;

int main() {

    SearchElementInACircularSortedArray mtry;

    int A[] = {12,14,18,21,3,6,8,9};
    int x;
    cout << "Enter a number: " << endl;
    cin >> x;
    int index = mtry.CircularArraySearch(A,8,x);
    if(index == -1){
        cout << x << " not found in the array" << endl;
    }
    else{
        cout << x << " was found at index "<< index << endl;
    }

    return 0;
}

