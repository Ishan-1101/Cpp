#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
 
int main()
{
   int i;
   string s = "hello my name is xyz";
   istringstream in(s);
   string word;
   for(word; in >> word; i++) {
    cout<<word<<endl;
   }
   return 0;
}