#include "InsertingNodeAtNthPosition.h"
#include <iostream>
using namespace std;

void InsertingNodeAtNthPosition::Insert(int data, int n) {
Node* temp1 = new Node();
temp1->data = data;
temp1->next = nullptr;
if(n == 1){
    temp1->next = head;
    head=temp1;
    return;
}
Node* temp2 = head;
for(int i = 0;i<n-2;i++){
    temp2 = temp2->next;
}
temp1->next = temp2->next;
temp2->next = temp1;
}

void InsertingNodeAtNthPosition::Print() {

        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<"\n";
    }


//InsertingNodeAtNthPosition maintry;
//
//maintry.head = nullptr;
//maintry.Insert(2,1);
//maintry.Insert(3,2);
//maintry.Insert(4,1);
//maintry.Insert(5,2);
//maintry.Print();
