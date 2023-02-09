#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

struct Node* head = nullptr;

void DoublyLinkedList::Insert(int newdata) {
    struct Node* newnode = new Node();
    newnode->data = newdata;
    newnode->prev = nullptr;
    newnode->next = head;
    if(head != nullptr)
        head->prev = newnode ;
    head = newnode;
}
void DoublyLinkedList::Print() {
    struct Node* ptr;
    ptr = head;
    while(ptr != nullptr) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
}

void DoublyLinkedList::ReversePrint() {
struct Node* ptr;
ptr = head;
if(ptr == nullptr){
    return; // empty  list,exit
}
//Going to last Node
while(ptr->next != nullptr){
    ptr = ptr->next;
}
//Traversing backward using prev pointer
cout << "Reverse: " << endl;
while(ptr != nullptr){
    cout << ptr->data << " ";
    ptr = ptr->prev;
}
cout << endl;
}


