#include <stdio.h>
#include <iostream>
#include "StackArrayBasedImplementation.h"
using namespace std;

void StackArrayBasedImplementation::Push(int x) {
    if(top == MAX_SIZE -1){
        cout << "Error: stack overflow\n" << endl;
        return;
    }
    A[++top] = x;
}
void StackArrayBasedImplementation::Pop() {
    if(top == -1){
        cout << "Error: No element to pop\n" << endl;
        return;
    }
    top--;
}
int StackArrayBasedImplementation::Top(){
    return A[top];
}
void StackArrayBasedImplementation::Print() {
    cout << "Stack: " << endl;
    for(int i = 0;i<=top;i++){
        cout << A[i] << " ";
    }
    cout << endl;
}


