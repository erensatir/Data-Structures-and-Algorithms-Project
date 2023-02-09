#ifndef BONUSWORKTRIAL_PRINTLINKEDLISTUSINGRECURSION_H
#define BONUSWORKTRIAL_PRINTLINKEDLISTUSINGRECURSION_H

struct Node {
public:
    int data;
    Node* next;
};

class PrintLinkedListUsingRecursion {
public:
    static Node * Insert(Node* head, int data);
    void PrintNormal(Node* p);
    void PrintReverseOrder(Node* p);

};

#endif //BONUSWORKTRIAL_PRINTLINKEDLISTUSINGRECURSION_H
