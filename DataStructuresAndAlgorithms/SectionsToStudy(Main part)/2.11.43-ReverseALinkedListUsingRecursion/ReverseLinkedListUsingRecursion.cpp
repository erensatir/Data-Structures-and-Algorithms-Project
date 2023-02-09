#include "ReverseLinkedListUsingRecursion.h"
#include <iostream>
using namespace std;

void ReverseLinkedListUsingRecursion::Reverse(Node* p){

 if(p->next == nullptr){
     head = p;
     return;  //Exit condition
 }
    Reverse(p->next);
    Node* q  = p->next;
    q->next = p;
    p->next = nullptr;
}

Node* ReverseLinkedListUsingRecursion::Insert(Node* head, int data) {
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

void ReverseLinkedListUsingRecursion::Print(Node* head) {

    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void ReverseLinkedListUsingRecursion::ReversePrint(Node *head) {
    if(head == nullptr){
        return;
    }
    ReversePrint(head->next);
    cout << head->data << " ";

}