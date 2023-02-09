#ifndef BONUSWORKTRIAL_INSERTINGNODEATBEGINNING_H
#define BONUSWORKTRIAL_INSERTINGNODEATBEGINNING_H

struct Node {
public:
    int data;
    Node* next;
};

class InsertingNodeAtBeginning {
public:
    InsertingNodeAtBeginning(){}
    void Insert(int x);
    void Print();

    Node* head = new Node();
};

#endif //BONUSWORKTRIAL_INSERTINGNODEATBEGINNING_H
