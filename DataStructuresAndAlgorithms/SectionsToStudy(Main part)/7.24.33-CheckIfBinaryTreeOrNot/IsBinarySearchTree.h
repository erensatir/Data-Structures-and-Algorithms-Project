#ifndef BONUSWORKTRIAL_ISBINARYSEARCHTREE_H
#define BONUSWORKTRIAL_ISBINARYSEARCHTREE_H

struct Node {
    int data;
    Node* Left;
    Node* right;
};

class IsBinarySearchTree {
public:
    Node *Insert(Node *root, int data);

    Node *GetNewNode(int data);

    bool IsSubtreeLesser(Node *root, int value);

    bool IsSubtreeGreater(Node *root, int value);

    bool IsBinarySearchTree1(Node *root);
};

#endif //BONUSWORKTRIAL_ISBINARYSEARCHTREE_H
