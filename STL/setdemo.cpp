#include<iostream>
#include<set>
using namespace std;

void setdemo()
{
   set<int> s;
   s.insert(1);
   s.insert(8);
   s.insert(-9);
   s.insert(2);
   s.insert(-10);
//arranged in ascending order in set

   for(int x:s)//print
   cout<<x<<" ";
   cout<<endl;

   auto it=s.find(2);
   if(it==s.end())
   cout<<*it<<" is not present";
   else{
       cout<<*it<<" is present"<<endl;
   }

   //find first number in set greater than 0
   auto it3=s.upper_bound(0);//strictly greater than zero
   auto it2=s.lower_bound(0);//greater than or equal to zero
   cout<<*it3<<" "<<*it2<<endl;

   //erase an element from the set
    s.erase(2);

    for(int x:s)
    cout<<x<<" ";
    cout<<endl;

}

int main()
{
    setdemo();
    return 0;
}