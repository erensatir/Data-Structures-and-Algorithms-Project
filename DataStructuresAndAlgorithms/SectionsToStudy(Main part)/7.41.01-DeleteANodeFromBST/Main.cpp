#include "DeleteANodeFromBST.h"
#include <iostream>
using namespace std;

int main() {

    DeleteANodeFromBST mtry;

    Node* root = nullptr; //Creating a empty tree
    root = mtry.Insert(root,12);
    root = mtry.Insert(root,5);
    root = mtry.Insert(root,15);
    root = mtry.Insert(root,3);
    root = mtry.Insert(root,7);
    root = mtry.Insert(root,1);
    root = mtry.Insert(root,9);
    root = mtry.Insert(root,13);
    root = mtry.Insert(root,27);

    cout << "Binary Search Tree in PreOrder BEFORE deletion: " << endl;
    mtry.PreOrder(root);
    cout << endl;

    //Deletion (All the cases work :) )
    mtry.Delete(root,1);

    cout << "Binary Search Tree in PreOrder AFTER deletion: " << endl;
    mtry.PreOrder(root);
    cout << endl;


    return 0;
}