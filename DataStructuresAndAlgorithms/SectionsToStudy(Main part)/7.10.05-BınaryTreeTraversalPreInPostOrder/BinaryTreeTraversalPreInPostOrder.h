#ifndef BONUSWORKTRIAL_BINARYTREETRAVERSALPREINPOSTORDER_H
#define BONUSWORKTRIAL_BINARYTREETRAVERSALPREINPOSTORDER_H

struct Node {
    int data;
    Node* Left;
    Node* right;
};

class BinaryTreeTraversalPreInPostOrder {
public:
    Node* Insert(Node* root,int data);
    Node* GetNewNode(int data);
    void PreOrder(Node *root);
    void InOrder(Node *root);
    void PostOrder(Node *root);
};

#endif //BONUSWORKTRIAL_BINARYTREETRAVERSALPREINPOSTORDER_H
