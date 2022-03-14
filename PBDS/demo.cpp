#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;
 
int main()
{
   pbds A;
   //insert
   cout<<"A contains : ";
   A.insert(1);
   A.insert(2);
   A.insert(4);
   A.insert(7);
   A.insert(2);
   A.insert(5);
   A.insert(11);
   A.insert(10);
   for(auto a:A)
   cout<<a<< " ";
   cout<<endl;
   //remove
   A.erase(1);cout<<"A contains : ";
   for(auto a:A)
   cout<<a<< " ";
   cout<<endl;
   //Kth element
   cout<<"4th element in A is : "<<*A.find_by_order(4)<< endl;
   //Smaller elements than X
   cout<<"No. of elements smaller than 10 is : "<<A.order_of_key(10)<<endl;
}