#ifndef BONUSWORKTRIAL_BINARYTREELEVELORDERTRAVERSAL_H
#define BONUSWORKTRIAL_BINARYTREELEVELORDERTRAVERSAL_H

struct BstNode {
    int data;
    BstNode* Left;
    BstNode* right;
};

class BinaryTreeLevelOrderTraversal {
public:
    BstNode* Insert(BstNode* root,int data);
    BstNode* GetNewNode(int data);
    void LevelOrder(BstNode *root);
};

#endif //BONUSWORKTRIAL_BINARYTREELEVELORDERTRAVERSAL_H
