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
    int number;

    cout << "Enter number be searched\n" ;
    cin>>number;
    if(mtry.Search(root, number)){
        cout << "Found\n" ;
    }
    else
        cout << "Not found" << endl;


    cout << "FindMin result: " ;
    cout << mtry.FindMin(root);
    cout << endl;

    cout << "FindMax result: " ;
    cout << mtry.FindMax(root);
    cout << endl;

    return 0;
}