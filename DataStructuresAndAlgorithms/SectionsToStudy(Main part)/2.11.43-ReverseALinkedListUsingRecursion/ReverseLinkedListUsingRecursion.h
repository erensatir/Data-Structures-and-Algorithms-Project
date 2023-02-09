#ifndef BONUSWORKTRIAL_REVERSELINKEDLISTUSINGRECURSION_H
#define BONUSWORKTRIAL_REVERSELINKEDLISTUSINGRECURSION_H

struct Node {
public:
    int data;
    Node* next;
};

class ReverseLinkedListUsingRecursion {
public:
    void Reverse(Node* p);
    Node* Insert(Node* head,int data);
    void Print(Node* head);
    void ReversePrint(Node* head);
    Node* head;
};

#endif //BONUSWORKTRIAL_REVERSELINKEDLISTUSINGRECURSION_H
