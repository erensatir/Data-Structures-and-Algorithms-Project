#include "UsingStackToReverse.h"
#include <iostream>

int main() {

    UsingStackToReverse mtry;

//First Part (Reversing A String Using Stack)
    string temp;
    cout << "Enter string: " << endl;
    cin >> temp;
    mtry.ReverseString(temp);
    cout << temp << endl;
// first part ends here now the 2. part:

//Second Part (Reversing a linked list using stack)
    Node* head = nullptr;
    head = mtry.Insert(head,5);
    head = mtry.Insert(head,8);
    head = mtry.Insert(head,19);
    head = mtry.Insert(head,33);
    head = mtry.Insert(head,51);
    //current list:
    mtry.Print(head);
    cout << endl;

    //Reversed List:
    head = mtry.ReverseLinkedList(head);
    mtry.Print(head);
    cout << endl;
    return 0;
}