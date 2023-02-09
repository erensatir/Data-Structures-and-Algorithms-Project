#include "QuickSortAlgorithm.h"
#include <iostream>
using namespace std;

int main() {

    QuickSortAlgorithm mtry;

    int A[] = {7,6,5,4,3,2,1,0};

    mtry.QuickSort(A,0,7);
    for(int i = 0;i<8;i++){
        cout << A[i] << " ";
    }

    return 0;
}