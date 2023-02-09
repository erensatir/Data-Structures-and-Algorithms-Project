#ifndef BONUSWORKTRIAL_STACKLINKEDLISTIMPLEMENTATION_H
#define BONUSWORKTRIAL_STACKLINKEDLISTIMPLEMENTATION_H

struct Node {
public:
    int data;
    Node* link;
};

class StackLinkedListImplementation{
public:
    void Push(int x);
    void Pop();
    void Print();

    struct Node* top = nullptr;
};

#endif //BONUSWORKTRIAL_STACKLINKEDLISTIMPLEMENTATION_H
