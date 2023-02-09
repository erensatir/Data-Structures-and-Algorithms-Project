#include "BSFindingFirstOrLastOccurrence.h"
#include <iostream>
using namespace std;

int main() {

    BSFindingFirstOrLastOccurrence mtry;

    //FIND FIRST OCCURRENCE

    int x; //Receive the number with cin
    int A[] = {2,4,10,10,10,18,20};
    cout << "Enter a number: " ;
    cin >> x;
    int index = mtry.BinarySearchFirstOccurrence(A,7,x);

    if(index != -1){
        cout << "Number " << x <<" is at index " << index << endl;
    }
    else {
        cout << "Number not found" << endl;
    }

    cout << endl;


//  FIND LAST OCCURRENCE
    int y;

    cout << "Enter a number: " ;
    cin >> y;
    int index1 = mtry.BinarySearchLastOccurrence(A,7,y);

    if(index1 != -1){
        cout << "Number " << y <<" is at index " << index1 << endl;
    }
    else {
        cout << "Number not found" << endl;
    }



    return 0;
}