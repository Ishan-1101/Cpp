//https://leetcode.com/problems/count-of-smaller-numbers-after-self/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less_equal<>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
int main(){
    vector<int>a(100);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    
    for(auto e:a)
    cout<<e<< " ";
}