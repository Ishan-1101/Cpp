//ORDERED SET

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int N=1e5+10;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;

int main()
{
  pbds cake;
  cout<<"Cake contains : ";
   cake.insert(1);
   cake.insert(2);
   cake.insert(10);
   cake.insert(7);
   cake.insert(2);
   for(auto s:cake){
      cout<<s<<" ";
   }
   cake.erase(2);
   for(auto s:cake){
      cout<<s<<" ";
   }

   cout<<"\n No. of elements smaller than 7 are : "<<cake.order_of_key(7)<<endl;

   cout<<"\n Element at index 2 : "<<*cake.find_by_order(2)<<endl;

}