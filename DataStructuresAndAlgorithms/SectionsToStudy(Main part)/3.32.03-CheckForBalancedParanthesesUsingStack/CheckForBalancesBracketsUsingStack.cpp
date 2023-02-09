#include <iostream>
#include <stack>
#include "CheckForBalancesBracketsUsingStack.h"

//The section for this video didn't included any code
//I've implemented this code getting help from a website (geeksforgeeks)

bool CheckForBalancedBracketsUsingStack::areBracketsBalanced(string expr)
{
    stack<char> s;
    char x;

    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }

        // IF current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;

        switch (expr[i]) {
            case ')':

                // Store the top element in a
                x = s.top();
                s.pop();
                if (x == '{' || x == '[')
                    return false;
                break;

            case '}':

                // Store the top element in b
                x = s.top();
                s.pop();
                if (x == '(' || x == '[')
                    return false;
                break;

            case ']':

                // Store the top element in c
                x = s.top();
                s.pop();
                if (x == '(' || x == '{')
                    return false;
                break;
        }
    }
    // Check Empty Stack
    return (s.empty());
}
