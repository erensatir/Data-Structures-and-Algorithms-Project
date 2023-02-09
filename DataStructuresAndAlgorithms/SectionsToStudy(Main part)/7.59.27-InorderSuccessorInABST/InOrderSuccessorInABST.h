#ifndef BONUSWORKTRIAL_INORDERSUCCESSORINABST_H
#define BONUSWORKTRIAL_INORDERSUCCESSORINABST_H

struct Node {
    int data;
    Node *Left;
    Node *right;
};

class InOrderSuccessorInABST {
public:
    Node* GetNewNode(int data);
    Node* Insert(Node *root, int data);
    //Function to find Inorder Successor in a BST
    Node* Getsuccessor(Node* root,int data);
    Node* FindMin(Node *root);
};

#endif //BONUSWORKTRIAL_INORDERSUCCESSORINABST_H
