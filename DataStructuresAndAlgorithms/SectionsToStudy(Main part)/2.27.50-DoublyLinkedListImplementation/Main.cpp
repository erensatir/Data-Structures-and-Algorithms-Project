#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

int main() {
    DoublyLinkedList mtry;
    mtry.Insert(3);
    mtry.Insert(1);
    mtry.Insert(7);
    mtry.Insert(2);
    mtry.Insert(9);

    cout<<"The doubly linked list is: ";
    mtry.Print();
    cout << endl;


    mtry.ReversePrint();
    cout << endl;
    return 0;
}