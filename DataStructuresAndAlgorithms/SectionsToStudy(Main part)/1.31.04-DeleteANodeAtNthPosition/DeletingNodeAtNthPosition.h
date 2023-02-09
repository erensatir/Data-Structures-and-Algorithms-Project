#ifndef BONUSWORKTRIAL_DELETINGNODEATNTHPOSITION_H
#define BONUSWORKTRIAL_DELETINGNODEATNTHPOSITION_H

struct Node {
public:
    int data;
    Node* next;
};
class DeletingNodeAtNthPosition {
public:
    DeletingNodeAtNthPosition(){}
    void Insert(int nm,int data);
    void Print();
    void Delete(int n);

    Node* head = new Node();
};

#endif //BONUSWORKTRIAL_DELETINGNODEATNTHPOSITION_H
