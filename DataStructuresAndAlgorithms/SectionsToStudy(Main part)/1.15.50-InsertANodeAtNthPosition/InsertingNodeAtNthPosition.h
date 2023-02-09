#ifndef BONUSWORKTRIAL_INSERTINGNODEATNTHPOSITION_H
#define BONUSWORKTRIAL_INSERTINGNODEATNTHPOSITION_H

struct Node {
public:
    int data;
    Node* next;
};

class InsertingNodeAtNthPosition {
public:
    InsertingNodeAtNthPosition(){}
    void Insert(int data,int n);
    void Print();
    Node* head = new Node();
};

#endif //BONUSWORKTRIAL_INSERTINGNODEATNTHPOSITION_H
