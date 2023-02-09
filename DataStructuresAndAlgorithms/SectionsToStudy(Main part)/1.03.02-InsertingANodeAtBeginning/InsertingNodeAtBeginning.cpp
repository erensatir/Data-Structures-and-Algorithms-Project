#include "InsertingNodeAtBeginning.h"
#include <iostream>
using namespace std;

void InsertingNodeAtBeginning::Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void InsertingNodeAtBeginning::Print(){
Node* temp = head;
    cout << "List is: " << endl;
while(temp != nullptr){
cout << temp->data << " ";
temp = temp->next;
}
cout<<"\n";
}

//int main() {
//
//    InsertingNodeAtBeginning maintry;
//    maintry.head = nullptr;
//    int n;
//    int x= 0;
//    cout << "How many numbers ?" << endl;
//    cin >> n;
//    for(int i = 0;i<n;i++){
//        cout << "Enter the number " << endl;
//        cin >> x;
//        maintry.Insert(x);
//        maintry.Print();
//        cout << endl;
//    }
//return 0;
//
//}