#include "LinkedListImplementationOfQueue.h"
#include <iostream>
using namespace std;

//The implementation in this section wasn't working for me so I've got some help from
// A website

void LinkedListImplementationOfQueue::Insert() {
    int val;
    cout<<"Insert the element in queue : "<<endl;
    cin>>val;
    if (rear == nullptr) {
        rear = new node();
        rear->next = nullptr;
        rear->data = val;
        front = rear;
    }
    else {
        temp=new node();
        rear->next = temp;
        temp->data = val;
        temp->next = nullptr;
        rear = temp;
    }
}

void LinkedListImplementationOfQueue::Delete() {
    temp = front;
    if (front == nullptr) {
        cout << "Underflow" << endl;
        return;
    } else {
        if (temp->next != nullptr) {
            temp = temp->next;
            cout << "Element deleted from queue is : " << front->data << endl;
            free(front);
            front = temp;
        } else {
            cout << "Element deleted from queue is : " << front->data << endl;
            free(front);
            front = nullptr;
            rear = nullptr;
        }
    }
}

void LinkedListImplementationOfQueue::Display() {
    temp = front;
    if ((front == nullptr) && (rear == nullptr)) {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Queue elements are: ";
    while (temp != nullptr) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}