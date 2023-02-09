#include "InOrderSuccessorInABST.h"
#include <iostream>
using namespace std;

int main() {

    InOrderSuccessorInABST mtry;

    Node* root = nullptr; //Creating a empty tree
    Node *temp, *succ ; //for the results of the GetSuccessor function

    root = mtry.Insert(root,20);
    root = mtry.Insert(root,8);
    root = mtry.Insert(root,22);
    root = mtry.Insert(root,4);
    root = mtry.Insert(root,12);
    root = mtry.Insert(root,10);
    root = mtry.Insert(root,14);

    temp = root->Left->right->right;

    succ = mtry.Getsuccessor(root,temp->data);
    if(succ != nullptr){
        cout << "\n Inorder Successor of " << temp->data << " is " <<succ->data<<endl;
    }
    else
        cout << "\n Inorder Successor doesn't exist" << endl;


    return 0;
}