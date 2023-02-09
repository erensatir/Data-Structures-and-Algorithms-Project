#ifndef BONUSWORKTRIAL_USINGSTACKTOREVERSE_H
#define BONUSWORKTRIAL_USINGSTACKTOREVERSE_H
#include <stack> // stack from standard template library (STL)
#include <string>
using namespace std;

struct Node {
public:
    int data;
    struct Node* next;
};

class UsingStackToReverse{
public:
    void ReverseString(string &str);
    Node* ReverseLinkedList(Node* head);
    Node* Insert(Node* head,int data);
    void Print(Node* head);
};

#endif //BONUSWORKTRIAL_USINGSTACKTOREVERSE_H
