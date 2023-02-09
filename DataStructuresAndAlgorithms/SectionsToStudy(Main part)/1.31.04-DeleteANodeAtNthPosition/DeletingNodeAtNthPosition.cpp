#include "DeletingNodeAtNthPosition.h"
#include <iostream>
using namespace std;

void DeletingNodeAtNthPosition::Insert(int nm,int data){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = nullptr;
    if(nm == 1){
        temp1->next = head;
        head=temp1;
        return;
    }
    Node* temp2 = head;
    for(int i = 0;i<nm-2;i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void DeletingNodeAtNthPosition::Print(){
    Node* temp = head;
    cout << "List is: " << endl;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<"\n";
}

void DeletingNodeAtNthPosition::Delete(int n){
    Node* temp1 = head;
    Node* temp2 = nullptr;
    if(n == 1){
        head = temp1->next;
        delete temp1;
        return;
    }
    for(int i = 0;i<n-2;i++) {
        temp1 = temp1->next;
        //temp1 points to n-1 th Node
    }
    temp2 = temp1->next;//nth node
    temp1->next = temp2->next; // (n+1)th node
    delete temp2;
}


//DeletingNodeAtNthPosition maintry;
//
//maintry.head = nullptr;
//maintry.Insert(2);
//maintry.Insert(4);
//maintry.Insert(6);
//maintry.Insert(5); //List : 2,4,6,5
//maintry.Print();
//int n;
//cout << "Enter a position\n" <<endl;
//cin >> n;
//maintry.Delete(n);
//maintry.Print();
