#include "ReverseLinkedListWIteration.h"
#include <iostream>
using namespace std;

struct Node* ReverseLinkedListWIteration::Reverse(Node* head){
    Node *current,*prev,*next; //If we go with 2 variables we lose adress
    current = head;
    prev = nullptr;
    while(current != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
Node* ReverseLinkedListWIteration::Insert(Node* head, int data) {
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

void ReverseLinkedListWIteration::Print(Node* head) {

    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
