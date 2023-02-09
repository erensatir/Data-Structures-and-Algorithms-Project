#include "StackLinkedListImplementation.h"
#include <iostream>
using namespace std;

void StackLinkedListImplementation::Push(int x) {
    struct Node* temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp;
}

void StackLinkedListImplementation::Pop() {
    struct Node *temp;
    if(top == nullptr){
        return;
    }
    temp = top;
    top = top->link;
    delete temp;
}

void StackLinkedListImplementation::Print() {
    Node* temp = top;
    cout << "List is: " << endl;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout<<"\n";
    //Print method wasnt necessary in this section I've implemented it to
    //test if it is working or not
    //It works proparly :)
}