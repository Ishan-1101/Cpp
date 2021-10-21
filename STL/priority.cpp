#include <iostream>
#include <queue>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int>>pq;
    priority_queue<int>max;
	pq.push(10);
	max.push(10);
	pq.push(30);
	max.push(30);
	pq.push(20);
	max.push(20);
	pq.push(5);
	max.push(5);
	pq.push(1);
	max.push(1);
    cout<<pq.top()<<endl;
    cout<<max.top()<<endl;
    cout<<"SIZE= "<<max.size()<<endl;
	return 0;
}
