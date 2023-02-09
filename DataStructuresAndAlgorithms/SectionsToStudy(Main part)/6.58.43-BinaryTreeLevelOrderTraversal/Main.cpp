#include "BinaryTreeLevelOrderTraversal.h"
#include <iostream>
using namespace std;

int main() {

    BinaryTreeLevelOrderTraversal mtry;

    BstNode* root = nullptr; //Creating a empty tree
    root = mtry.Insert(root,20);
    root = mtry.Insert(root,9);
    root = mtry.Insert(root,23);
    root = mtry.Insert(root,49);
    root = mtry.Insert(root,52);
    root = mtry.Insert(root,50);
    root = mtry.Insert(root,15);
    root = mtry.Insert(root,12);
    root = mtry.Insert(root,5);

    mtry.LevelOrder(root);

    return 0;
}