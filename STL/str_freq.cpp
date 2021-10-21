//ordered map
#include<bits/stdc++.h>
using namespace std;
#define f(n) for(int i=0;i<n;i++)
int main()
{
    map<string,int>m;//int will automatically be initialized as 0
    int n;
    cin>>n;
    string s;
    f(n){
    cin>>s;
    m[s]++;
    }
    for(auto pr:m)
    cout<<pr.first<<" "<<pr.second<<endl;
    return 0;
}