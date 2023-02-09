#include "DeletingNodeAtNthPosition.h"
#include <iostream>
using namespace std;

int main() {

    DeletingNodeAtNthPosition maintry;

    maintry.head = nullptr;
    maintry.Insert(1,2);
    maintry.Insert(2,4);
    maintry.Insert(3,6);
    maintry.Insert(4,5); //List : 2,4,6,5
    maintry.Print();
    int n;
    cout << "Enter the position to be deleted: " <<endl;
    cin >> n;
    maintry.Delete(n);
    maintry.Print();

    return 0;
}

