#ifndef BONUSWORKTRIAL_LINKEDLISTIMPLEMENTATIONOFQUEUE_H
#define BONUSWORKTRIAL_LINKEDLISTIMPLEMENTATIONOFQUEUE_H

struct node {
    int data;
    node *next;
};

class LinkedListImplementationOfQueue {
public:
    void Insert();
    void Delete();
    void Display();

    node* front = nullptr;
    node* rear = nullptr;
    node* temp;
};

#endif //BONUSWORKTRIAL_LINKEDLISTIMPLEMENTATIONOFQUEUE_H
