#include "InsertingNodeAtNthPosition.h"
#include <iostream>
using namespace std;

int main() {

    InsertingNodeAtNthPosition maintry;

    maintry.head = nullptr;
    maintry.Insert(2,1);
    maintry.Insert(3,2);
    maintry.Insert(4,3);
    maintry.Insert(5,4);
    maintry.Print();
    return 0;
}

