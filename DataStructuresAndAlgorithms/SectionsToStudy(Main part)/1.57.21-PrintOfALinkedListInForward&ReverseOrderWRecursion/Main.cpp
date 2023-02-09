#include "PrintLinkedListUsingRecursion.h"
#include <iostream>
using namespace std;

int main() {

    PrintLinkedListUsingRecursion mtry;
    Node* head = nullptr;
    head = mtry.Insert(head,2);
    head = mtry.Insert(head,4);
    head = mtry.Insert(head,6);
    head = mtry.Insert(head,8);

    cout << "Normal print with recursion: " << endl;
    mtry.PrintNormal(head);

    cout << "Reverse print with recursion: " << endl;
    mtry.PrintReverseOrder(head);

    return 0;
}