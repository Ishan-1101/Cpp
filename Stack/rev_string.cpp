#include <bits/stdc++.h>
#include <string>
using namespace std;
void reverse(string st)
{
    stack<string> str;
    for (int i = 0; i < st.length(); i++)
    {
        string word = "";
        while (st[i] != ' ' && i < st.length())
        {
            word = word + st[i];
            i++;
        }
        str.push(word);
    }
    while (!str.empty())
    {
        cout << str.top() << " ";
        str.pop();
    }
    cout<<endl;
}
int main()
{
    string st;
    cout << "Enter a sentence: \n";
    getline(cin, st);
    cout << "REVERSE: \n";
    reverse(st);
    return 0;
}