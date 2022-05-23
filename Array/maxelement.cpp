#include<bits/stdc++.h>
using namespace std;
//max_element returns the max element's iterator (first occurrence) in O(n) time.
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    cout<<*max_element(v.begin(),v.end())<<endl;
    return 0;
}