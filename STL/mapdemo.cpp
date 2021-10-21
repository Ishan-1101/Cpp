#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> count;
    string name = "ishan sharma";
    for (char c : name)
        count[c]++;

    //how many times does a character occur in mu name
    cout << count['a'] << " " << count['z'] << endl;

    return 0;
}