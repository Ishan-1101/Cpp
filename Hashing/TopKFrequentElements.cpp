#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<pair<int, int>> vp;

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    return a.second > b.second;
}

void copyMaptoVector(map<int, int> &m)
{
    for (auto &it : m)
        vp.push_back(it);
}

int main()
{
    int k=2;
    vector<int> v{1,1,1,2,2,3};
    map<int, int> mp;
    for (auto e : v)
        mp[e]++;
    for (auto it : mp)
        cout << it.first << "->" << it.second << endl;

    copyMaptoVector(mp); // copy key-value pair from map to vector of pair
    sort(vp.begin(), vp.end(), compare);
    cout << "After sorting according to values" << endl;
    for (auto p : vp)
        cout << p.first << " " << p.second << endl;
    cout<<"top K freq elements : \n";
    for(auto p:vp){
        if(k--)
        cout<<p.first<<" ";
        else break;
    }
    return 0;
}