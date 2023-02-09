#ifndef BONUSWORKTRIAL_BINARYSEARCHTREE_H
#define BONUSWORKTRIAL_BINARYSEARCHTREE_H

struct BstNode {
    int data;
    BstNode* Left;
    BstNode* right;
};

class BinarySearchTree {
public:
    BstNode* Insert(BstNode* root,int data);
    BstNode* GetNewNode(int data);
    //search method
    bool Search(BstNode* root,int data);
    //find min
    int FindMin(BstNode* root);
    //find max
    int FindMax(BstNode* root);
    //find height
    int FindHeight(BstNode* root);
};


#endif //BONUSWORKTRIAL_BINARYSEARCHTREE_H
