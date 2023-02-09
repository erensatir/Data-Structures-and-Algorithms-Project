#ifndef BONUSWORKTRIAL_DOUBLYLINKEDLIST_H
#define BONUSWORKTRIAL_DOUBLYLINKEDLIST_H

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

class DoublyLinkedList {
public:
    void Insert(int newdata);
    void Print();
    void ReversePrint();
};

#endif //BONUSWORKTRIAL_DOUBLYLINKEDLIST_H
