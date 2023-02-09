#include "SelectionSortAlgorithm.h"
#include <iostream>
using namespace std;

int main() {

    SelectionSortAlgorithm mtry;

    int A[] = {2,7,4,1,5,3};
    mtry.SelectionSort(A,6);

    for(int i = 0;i<6;i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}