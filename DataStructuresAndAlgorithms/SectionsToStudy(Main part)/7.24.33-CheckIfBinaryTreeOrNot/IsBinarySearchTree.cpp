#include "IsBinarySearchTree.h"
#include <iostream>
using namespace std;

Node* IsBinarySearchTree::GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->Left = newNode->right = nullptr;
    return newNode;
}

Node* IsBinarySearchTree::Insert(Node *root, int data) {
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

bool IsBinarySearchTree::IsSubtreeLesser(Node *root, int value) {
    if(root == nullptr){return true;}
    if(root->data <= value && IsSubtreeLesser(root->Left,value) && IsSubtreeLesser(root->right,value)){
        return true;
    }
    else
        return false;
}

bool IsBinarySearchTree::IsSubtreeGreater(Node *root, int value) {
    if(root == nullptr){return true;}
    if(root->data > value && IsSubtreeGreater(root->Left,value) && IsSubtreeGreater(root->right,value)){
        return true;
    }
    else
        return false;
}

bool IsBinarySearchTree::IsBinarySearchTree1(Node* root){
    if(root == nullptr){return true;}

    if(IsSubtreeLesser(root->Left,root->data) &&
    IsSubtreeGreater(root->right,root->data) &&
    IsBinarySearchTree1(root->Left) && IsBinarySearchTree1(root->right)) {
        return true;
    }

    else
        return false;
}


