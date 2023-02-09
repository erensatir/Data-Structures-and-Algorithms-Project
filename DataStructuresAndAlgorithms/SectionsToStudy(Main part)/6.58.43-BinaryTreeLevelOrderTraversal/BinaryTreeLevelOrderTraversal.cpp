#include <queue>
#include <iostream>
#include "BinaryTreeLevelOrderTraversal.h"
using namespace std;


BstNode* BinaryTreeLevelOrderTraversal::GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->Left = newNode->right = nullptr;
    return newNode;
}

BstNode* BinaryTreeLevelOrderTraversal::Insert(BstNode *root, int data) {
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

void BinaryTreeLevelOrderTraversal::LevelOrder(BstNode *root) {
    if(root == nullptr){
        return;
    }
    queue<BstNode*> Qu;
    Qu.push(root);
    //while there is at least one discovered node
    while(!Qu.empty()) {
        BstNode* current = Qu.front();
        cout << current->data << " ";
        if(current->Left != nullptr){
            Qu.push(current->Left);
        }
        if(current->right != nullptr){
            Qu.push(current->right);
        }
        Qu.pop(); // removing the element at front
    }

}



