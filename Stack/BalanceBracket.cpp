/*
  C++ Program to check for balanced parentheses in an expression using stack.
  Given an expression as string comprising of opening and closing characters
  of parentheses - (), curly braces - {} and square brackets - [], we need to 
  check whether symbols are balanced or not. 
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
// Function to check whether two characters are opening and closing of same type.
bool ArePair(char opening, char closing)
{
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    return false;
}
bool isBalanced(string s)
{
    stack<char> stk;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stk.push(s[i]);
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (stk.empty() || !ArePair(stk.top(), s[i]))
                return false;
            else
            {
                stk.pop();
            }
        }
    }
    return stk.empty() ? true : false;
}
int main()
{
    string expression;
    cout << "Enter an expression:  " << endl;
    cin >> expression;
    if (isBalanced(expression))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
    return 0;
}
