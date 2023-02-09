#include <iostream>
#include "InsertingNodeAtBeginning.h"

using namespace std;
int main() {

    InsertingNodeAtBeginning maintry;
    maintry.head = nullptr;
    int n;
    int x= 0;
    cout << "How many numbers ?" << endl;
    cin >> n;
    for(int i = 0;i<n;i++){
        cout << "Enter the number " << endl;
        cin >> x;
        maintry.Insert(x);
        maintry.Print();
        cout << endl;
    }


    return 0;
}