#include<bits/stdc++.h>
using namespace std;
int N,K,M;
long long max_s,sum,temp;
void solve() {
 M=N-1;
 max_s=pow(2,M);
 temp=pow(2,N)-1;
 if(K>max_s)
 sum=2*temp*max_s;
 else{
     sum=2*temp*K;
 }
 cout<<sum<<"\n";
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        cin>>N>>K;
      solve();
    }

    return 0;
}
