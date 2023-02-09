#include "ReverseLinkedListWIteration.h"
#include <iostream>
using namespace std;

int main() {

    ReverseLinkedListWIteration mtry;
    Node* head = nullptr;
    head = mtry.Insert(head,2);
    head = mtry.Insert(head,4);
    head = mtry.Insert(head,6);
    head = mtry.Insert(head,8);

    //Before Reverse
    mtry.Print(head);
    cout << endl;

    //After Reverse
    head = mtry.Reverse(head);
    mtry.Print(head);

    return 0;
}