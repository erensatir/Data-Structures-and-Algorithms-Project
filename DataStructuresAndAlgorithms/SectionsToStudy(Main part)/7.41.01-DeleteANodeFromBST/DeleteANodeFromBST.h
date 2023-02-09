#ifndef BONUSWORKTRIAL_DELETEANODEFROMBST_H
#define BONUSWORKTRIAL_DELETEANODEFROMBST_H

struct Node {
    int data;
    Node* Left;
    Node* right;
};

class DeleteANodeFromBST {
public:
    Node* Insert(Node* root,int data);
    Node* GetNewNode(int data);
    Node* Delete(Node* root, int data);
    Node* FindMin(Node* root);
    void PreOrder(Node* root);
};

#endif //BONUSWORKTRIAL_DELETEANODEFROMBST_H
