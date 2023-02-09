#include "InOrderSuccessorInABST.h"
#include <iostream>
using namespace std;

Node *InOrderSuccessorInABST::GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->Left = newNode->right = nullptr;
    return newNode;
}

Node* InOrderSuccessorInABST::Insert(Node *root, int data) {
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

Node* InOrderSuccessorInABST::FindMin(Node *root) {
    if(root == nullptr){
        return nullptr;
    }
    while(root->Left != nullptr){
        root = root->Left;
    }
    return root;
}

Node* InOrderSuccessorInABST::Getsuccessor(Node* root,int data){
    //Search the Node
    Node* current = FindMin(root); //not implemented the find function
    if(current == nullptr) {return nullptr;}
    //Case 1: Node has right subtree
    if(current->right != nullptr){
       return FindMin(current->right);
    }
    //Case 2: No right subtree
    else {
        Node* successor = nullptr;
        Node* ancestor = root;
        while(ancestor != current){
            if(current->data < ancestor->data){
                successor = ancestor; //so far this is the deepest node for which current node is in left
                ancestor = ancestor->Left;
            }
            else
                ancestor = ancestor->right;
        }
        return successor;
    }
}
