#include "UsingStackToReverse.h"
#include <iostream>
using namespace std;

Node* head; //Global variable

void UsingStackToReverse::ReverseString(string &str) {
    // create an empty stack
    stack<int> s;

    // Push each character in the string to the stack
    for (char ch: str) {
        s.push(ch);
    }
    // pop all characters from the stack and
    // put them back to the input string
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
    }
}

Node* UsingStackToReverse::ReverseLinkedList(Node* head) {
    // Stack to store elements of list
    stack<Node *> stk;

    // Push the elements of list to stack
    Node* ptr = head;
    while (ptr->next != nullptr) {
        stk.push(ptr);
        ptr = ptr->next;
    }

    // Pop from stack and replace
    // current nodes value'
    head = ptr;
    while (!stk.empty()) {
        ptr->next = stk.top();

        ptr = ptr->next;
        stk.pop();
    }

    ptr->next = nullptr;

    return head;
}

Node* UsingStackToReverse::Insert(Node* head, int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = nullptr;
    if(head == nullptr){
        head = temp;
    }
    else {
        Node* temp1 = head;
        while(temp1->next != nullptr) temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
}

void UsingStackToReverse::Print(Node* head) {

    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<"\n";
}

//this part uses stack to reverse a STRING
//    UsingStackToReverse maintry;
//
//    string temp;
//    cout << "Enter string: " << endl;
//    cin >> temp;
//    maintry.ReverseString(temp);
//    cout << temp << endl;
// first part ends here now the 2. part:

//this part uses stack to reverse a linked list
//kODUN İLK KISMI ÇALIŞIO