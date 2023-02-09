#include "HowManyTimesIsASortedArrayRotated.h"
#include <iostream>
using namespace std;

int main() {

    HowManyTimesIsASortedArrayRotated mtry;
//Elements are not sorted
    int A[] ={15,22,23,28,31,38,5,6,8,10,12};
    int count = mtry.FindRotationCount(A,11);
    cout << "The array is rotated " << count << " times."<<endl;


//For sorted elements obviously = 0
    int B[] ={1,2,3,4,5,6,7,8,9,10,11};
    int count1 = mtry.FindRotationCount(B,11);
    cout << "The array is rotated " << count1 << " times."<<endl;



    return 0;
}

