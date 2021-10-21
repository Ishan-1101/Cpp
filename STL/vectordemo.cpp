#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>A={1,2,4,7,5,6,3};
    cout<<A[1]<<endl;

    sort(A.begin(),A.end()); //O(nlogn)
    //1 2 3 4 5 6 7 
    vector<int>::iterator it; //auto it;    
    for(it=A.begin();it!=A.end();it++)
    {
        cout<<*it<< " ";
    }
    cout<<endl;
    A.push_back(8);
    A.push_back(8);
    A.push_back(8);
    A.push_back(8);
    A.push_back(8);
    
    bool present=binary_search(A.begin(),A.end(),7);//true
    cout<<present<<endl;
    vector<int>v (3,50);
    swap(A,v);
    for(int x:A)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v.push_back(9); //1 2 3 4 5 6 7 8 8 8 8 8 9
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    auto it2=lower_bound(v.begin(),v.end(),8);//7
    auto it3=upper_bound(v.begin(),v.end(),8);//12
    cout<<*it2<<" "<<*it3<<endl;
    cout<<it3-it2<<endl; //freq of 8

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    
    return 0;
}