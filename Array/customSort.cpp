#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

static bool comparator(pair<int, int>& a, pair<int, int>& b){
    return a.second > b.second;
}
 
int main()
{
   vector<pair<int, int>> vpii;
   pair<int, int> pii;
   for(int i = 0; i < 5; i++){
    cin>>pii.first>>pii.second;
    vpii.push_back(pii);
   }

    sort(vpii.begin(), vpii.end());
    cout<<"\n AFTER SORTING : \n";
    for(auto& p : vpii)
   cout<<p.first<<" "<<p.second<<endl;

    cout<<"\n AFTER CUSTOM SORTING : \n";
    sort(vpii.begin(), vpii.end(), comparator);
    for(auto& p : vpii)
   cout<<p.first<<" "<<p.second<<endl;

   return 0;
}