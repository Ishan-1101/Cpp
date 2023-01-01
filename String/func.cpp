#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
 
int main()
{
   char str[] = "436gvakc5";
   long int res = atol(str); 
   char str1[] = "6t71fuytq13";
   // convert c-type string into long int
   cout<<res + atol(str1)<<endl; // 436 + 6

    string a = "dummyStringForTesting79237";
    cout<<a.c_str()<<endl;
    cout<<a.c_str()[a.length()-1]<<endl;

   return 0;
}