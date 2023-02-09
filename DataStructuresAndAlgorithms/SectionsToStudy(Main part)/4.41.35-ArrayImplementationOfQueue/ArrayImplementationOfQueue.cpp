//There isn't a proper implementation at this section,
//I've implemented this code with some help from a website
#include "ArrayImplementationOfQueue.h"
#include <iostream>
using namespace std;

//Implementation of EnQueue in C++ by T4Tutotirlas.com
void ArrayImplementationOfQueue::Queue_insertion() {
    int val;
    if (rear == n - 1)
        cout<<"Queue Overflow"<<endl;
    else {

        front = 0;
        cout<<" insert value in the queue : "<<endl;
        cin>>val;
        rear++;
        queue[rear] = val;
    }
}
//Implementation of DeQueue in C++ by T4Tutotirlas.com
void ArrayImplementationOfQueue::Delete() {
    if (front == - 1) {
        cout<<"Queue Underflow ";
        return ;
    } else {
        cout<<"Element deleted from queue is : "<< queue[front] <<endl;
        front++;;
    }
}
//Implementation of display Queue in C++ by T4Tutotirlas.com
void ArrayImplementationOfQueue::Display_Queue () {
    if (front == - 1 )
        cout<<"Queue is empty"<<endl;
    else {
        cout<<"Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout<<queue[i]<<" ";
        cout<<endl;
    }
}

