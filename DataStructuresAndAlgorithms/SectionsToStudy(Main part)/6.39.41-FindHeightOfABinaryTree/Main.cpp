#include <stack>
#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

int main() {

    BinarySearchTree mtry;

    BstNode* root = nullptr; //Creating a empty tree
    root = mtry.Insert(root,15);
    root = mtry.Insert(root,10);
    root = mtry.Insert(root,20);
    root = mtry.Insert(root,25);
    root = mtry.Insert(root,8);
    root = mtry.Insert(root,12);

    cout << "Height of the tree: "<< mtry.FindHeight(root) << endl;

    return 0;
}