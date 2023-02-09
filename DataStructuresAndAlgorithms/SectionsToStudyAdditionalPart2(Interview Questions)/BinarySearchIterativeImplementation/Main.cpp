#include "BinarySearch.cpp"
#include <iostream>
using namespace std;

int main() {

   BinarySearch mtry;

   int x; //Receive the number with cin
   int A[] = {2,4,5,7,13,14,15,23};
   cout << "Enter a number: " ;
   cin >> x;
   int index = mtry.BinarySearchFunction(A,8,x);
   if(index != -1){
       cout << "Number " << x <<" is at index " << index << endl;
   }
   else {
       cout << "Number not found" << endl;
   }

   return 0;
}
