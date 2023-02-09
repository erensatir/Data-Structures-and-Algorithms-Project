#include "CheckForBalancesBracketsUsingStack.h"
#include <iostream>
using namespace std;

int main() {

    CheckForBalancedBracketsUsingStack mtry;

    string expr = "{()}[]";

    // Function call
    if (mtry.areBracketsBalanced(expr)) {
        cout << "Balanced";
    }

    else{
        cout << "Not Balanced";
    }


    return 0;
}