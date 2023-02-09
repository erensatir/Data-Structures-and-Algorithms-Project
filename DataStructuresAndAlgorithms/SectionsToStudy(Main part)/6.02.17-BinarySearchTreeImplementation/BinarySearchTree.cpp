#include <iostream>
#include "BinarySearchTree.h"
using namespace std;
/*
 IN THIS PART OF THE VIDEO JUST FINDHEIGHT METHOD IS IMPLEMENTED
 */


BstNode *BinarySearchTree::GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->Left = newNode->right = nullptr;
    return newNode;
}

BstNode* BinarySearchTree::Insert(BstNode *root, int data) {
if(root == nullptr){ //empty tree
    root = GetNewNode(data);
}
else if(data <= root->data){
    root->Left = Insert(root->Left,data);
}
else {
    root->right = Insert(root->right,data);
}
return root;
}

bool BinarySearchTree::Search(BstNode *root, int data) {
    if(root == nullptr){ return false; }
    else if(root->data == data){ return true; }
    else if(data <= root->data) return Search(root->Left,data);
    else
        return Search(root->right,data);
}

//Added findMin and findMax

int BinarySearchTree::FindMin(BstNode *root) {
    if(root == nullptr){
        cout << "Error: Tree is empty\n";
        return -1;
    }
    while(root->Left != nullptr){
        root = root->Left;
    }
    return root->data;
}

int BinarySearchTree::FindMax(BstNode *root) {
    if(root == nullptr){
        cout << "Error: Tree is empty\n";
        return -1;
    }
    //loop down to find the rightmost leaf
    while(root->right != nullptr){
        root = root->right;
    }
    return (root->data);
}
//find height of the tree

int BinarySearchTree::FindHeight(BstNode *root) {
    if(root == nullptr){
        return -1;
    }
    return max(FindHeight(root->Left), FindHeight(root->right)) + 1;
}


