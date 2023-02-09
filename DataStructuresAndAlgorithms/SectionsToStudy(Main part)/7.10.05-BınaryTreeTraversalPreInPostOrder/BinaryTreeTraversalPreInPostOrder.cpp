#include <iostream>
#include "BinaryTreeTraversalPreInPostOrder.h"
using namespace std;

Node *BinaryTreeTraversalPreInPostOrder::GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->Left = newNode->right = nullptr;
    return newNode;
}

Node* BinaryTreeTraversalPreInPostOrder::Insert(Node *root, int data) {
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

void BinaryTreeTraversalPreInPostOrder::PreOrder(Node *root) {
    if(root == nullptr){return;}
    cout << root->data << " ";
    PreOrder(root->Left);
    PreOrder(root->right);
}
void BinaryTreeTraversalPreInPostOrder::InOrder(Node *root) {
    if(root == nullptr){return;}
    InOrder(root->Left);
    cout << root->data << " ";
    InOrder(root->right);
}
void BinaryTreeTraversalPreInPostOrder::PostOrder(Node *root) {
    if(root == nullptr){return;}
    PostOrder(root->Left);
    PostOrder(root->right);
    cout << root->data << " ";
}