#include "PrintLinkedListUsingRecursion.h"
#include <iostream>
using namespace std;

Node* PrintLinkedListUsingRecursion::Insert(Node* head, int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = nullptr;
    if(head == nullptr){
        head = temp;
    }
    else {
        Node* temp1 = head;
        while(temp1->next != nullptr) temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
}

void PrintLinkedListUsingRecursion::PrintNormal(Node* p) {

    if (p == nullptr) {
        cout << " " << endl; // exit condition
        return;
    }
        cout << p->data << " " << endl; // print
        PrintNormal(p->next); // recursive call
}

void PrintLinkedListUsingRecursion::PrintReverseOrder(Node *p) {
    if (p == nullptr) {
        cout << " " << endl; // exit condition
        return;
    }
    PrintReverseOrder(p->next); // recursive call
    cout << p->data << " " << endl; // print
}



