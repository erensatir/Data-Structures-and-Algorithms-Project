#include "LinkedListImplementationOfQueue.h"
#include <iostream>
using namespace std;

int main() {

LinkedListImplementationOfQueue mtry;

    int ch;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
    do {
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch (ch) {
            case 1: mtry.Insert();
                break;
            case 2: mtry.Delete();
                break;
            case 3: mtry.Display();
                break;
            case 4: cout<<"Exit"<<endl;
                break;
            default: cout<<"Invalid choice"<<endl;
        }
    } while(ch!=4);
    return 0;
}