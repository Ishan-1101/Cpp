#include <bits/stdc++.h>
#define f for(int i=0; i<n; i++)
using namespace std;

int main() {
	 int t; cin>>t; while(t--){
	     int n,k; cin>>n;
	     int a[n]; f cin>>a[i];
	     cin>>k;
	     queue<int> q;
	     for(int i=0; i<k; i++){
	        if(a[i]<0)
	         q.push(i);
	    }
	     for(int i=k; i<n; i++){
	        if(!q.empty())
	             cout<<a[q.front()]<<" ";
	           else cout<<0<<" ";
	           while(!q.empty() && q.front()<=(i-k))
	            q.pop();
	            if(a[i]<0)
	                q.push(i);
	     }
	     if(!q.empty())
	             cout<<a[q.front()]<<" ";
	           else cout<<0<<" ";
	     cout<<'\n';
	     
	 }
	return 0;
}
