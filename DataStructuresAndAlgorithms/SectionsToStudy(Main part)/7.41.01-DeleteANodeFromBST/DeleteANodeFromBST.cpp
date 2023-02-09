#include "DeleteANodeFromBST.h"
#include <iostream>
using namespace std;

Node *DeleteANodeFromBST::GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->Left = newNode->right = nullptr;
    return newNode;
}

Node* DeleteANodeFromBST::Insert(Node *root, int data) {
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

Node* DeleteANodeFromBST::FindMin(Node *root) {
    if(root == nullptr){
        return nullptr;
    }
    while(root->Left != nullptr){
        root = root->Left;
    }
    return root;
}

Node* DeleteANodeFromBST::Delete(Node *root, int data) {
    if(root == nullptr){ return root; }
    else if(data < root->data) {
        root->Left = Delete(root->Left,data);
    }
    else if (data > root->data) {
        root->right = Delete(root->right,data);
    }
    else{ // Founded the node thats going to be deleted
        //Case 1: No child
        if(root->Left == nullptr && root->right == nullptr){
            delete root;
            root = nullptr;
        }
        //Case 2: One child
        else if(root->Left == nullptr){
            Node *temp = root;
            root = root->right;
            delete temp;
        }

        else if(root->right == nullptr){
            Node *temp = root;
            root = root->Left;
            delete temp;
        }
        //Case3: 2 children
        else{
            Node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root; //need to return root at every case so we wrote it here
}

//for printing the before/after delete operation
void DeleteANodeFromBST::PreOrder(Node *root) {
    if(root == nullptr){return;}
    cout << root->data << " ";
    PreOrder(root->Left);
    PreOrder(root->right);
}