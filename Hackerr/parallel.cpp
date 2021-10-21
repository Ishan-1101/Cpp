#include<bits/stdc++.h>
using namespace std;
int limit,nof,noc;
vector<int> files;
void solve() {
    sort(files.begin(),files.end());
     int ans=0;
     int max=*max_element(files.begin(),files.end());
     for(int i=0;i<files.size()-limit;i++)
     ans+=files[i];
         for(int i=files.size()-limit;i<files.size();i++)
        ans+=files[i]/noc;
        cout<<ans;
}
int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        cin>>nof>>noc>>limit;
        for(int i=0;i<nof;i++)
        cin>>files[i];
      solve();
    }
    return 0;
}
