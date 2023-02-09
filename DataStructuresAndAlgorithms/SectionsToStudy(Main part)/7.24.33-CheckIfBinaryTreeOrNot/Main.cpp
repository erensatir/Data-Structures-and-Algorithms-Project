#include "IsBinarySearchTree.h"
#include <iostream>
using namespace std;

int main() {

    IsBinarySearchTree mtry;

    Node* root = nullptr; //Creating a empty tree
    root = mtry.Insert(root,7);
    root = mtry.Insert(root,4);
    root = mtry.Insert(root,1);
    root = mtry.Insert(root,6);
    root = mtry.Insert(root,9);

    //Expected Result: true (1)
    if(mtry.IsBinarySearchTree1(root)){
        cout << "It is a binary search tree" << endl;
    }
    else {
        cout << "Try again :("<< endl;
    }

    return 0;
}