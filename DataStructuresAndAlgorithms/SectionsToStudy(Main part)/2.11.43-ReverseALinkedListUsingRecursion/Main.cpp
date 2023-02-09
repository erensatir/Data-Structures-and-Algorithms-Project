#include "ReverseLinkedListUsingRecursion.h"
#include <iostream>
using namespace std;

int main() {

    ReverseLinkedListUsingRecursion mtry;

    Node* head = nullptr;
    head = mtry.Insert(head,11);
    head = mtry.Insert(head,22);
    head = mtry.Insert(head,34);
    head = mtry.Insert(head,57);
    head = mtry.Insert(head,98);

    mtry.head = head;


    cout << "Normal Print: " << endl;
    mtry.Print(mtry.head);
    cout << endl;

    cout << "Reverse Print: " << endl;
    mtry.ReversePrint(mtry.head);
    cout << endl;

    cout << "Reverse the linked list using recursion: " << endl;
    mtry.Reverse(mtry.head);
    mtry.Print(mtry.head);
    cout << endl;

    return 0;
}