#ifndef BONUSWORKTRIAL_REVERSELINKEDLISTWITERATION_H
#define BONUSWORKTRIAL_REVERSELINKEDLISTWITERATION_H

struct Node {
public:
    int data;
    Node* next;
};

class ReverseLinkedListWIteration {
public:
    struct Node* Reverse(Node* head);
    Node* Insert(Node* head,int data);
    void Print(Node* head);

};

#endif //BONUSWORKTRIAL_REVERSELINKEDLISTWITERATION_H
