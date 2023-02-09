#include "BinaryTreeTraversalPreInPostOrder.h"
#include <iostream>
using namespace std;

int main() {

    BinaryTreeTraversalPreInPostOrder mtry;

    Node* root = nullptr; //Creating a empty tree
    root = mtry.Insert(root,15);
    root = mtry.Insert(root,10);
    root = mtry.Insert(root,20);
    root = mtry.Insert(root,25);
    root = mtry.Insert(root,8);
    root = mtry.Insert(root,12);

    cout << "PreOrder traversal: " << endl;
    mtry.PreOrder(root);
    cout << endl;
    cout << "InOrder traversal: " << endl;
    mtry.InOrder(root);
    cout << endl;
    cout << "PostOrder traversal: " << endl;
    mtry.PostOrder(root);
    cout << endl;

    return 0;
}