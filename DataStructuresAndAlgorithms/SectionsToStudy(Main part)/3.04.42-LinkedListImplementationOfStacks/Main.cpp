#include "StackLinkedListImplementation.h"
#include <iostream>
using namespace std;

int main() {
    StackLinkedListImplementation mtry;

    mtry.Push(2);  mtry.Print();
    mtry.Push(5);  mtry.Print();
    mtry.Push(10); mtry.Print();
    mtry.Pop();       mtry.Print();
    mtry.Push(12); mtry.Print();

    return 0;
}