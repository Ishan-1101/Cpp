#include <bits/stdc++.h>

using namespace std;

void solve1(vector<int>&arr){
	vector<int>op;
	stack<int>s;
	
	for(int i=0;i<arr.size();i++){
		if(s.size()==0)
		op.push_back(-1);
		else if(s.size()>0 && s.top()<arr[i])
		op.push_back(s.top());
		else if(s.size()>0 && s.top()>=arr[i]){
			while(s.size()>0 && s.top()>=arr[i])
			s.pop();
			if(s.size()==0)
			op.push_back(-1);
			else
			op.push_back(s.top());
		}
		s.push(arr[i]);
	}
	
	for(auto i:op)
	cout<<i<<" ";
}

void solve2(vector<int>&arr){
	vector<int>op;
	stack<int>s;
	
	for(int i=arr.size()-1;i>=0;i--){
		if(s.size()==0)
		op.push_back(-1);
		else if(s.size()>0 && s.top()<arr[i])
		op.push_back(s.top());
		else if(s.size()>0 && s.top()>=arr[i]){
			while(s.size()>0 && s.top()>=arr[i])
			s.pop();
			if(s.size()==0)
			op.push_back(-1);
			else
			op.push_back(s.top());
		}
		s.push(arr[i]);
	}
	reverse(op.begin(),op.end());
	
	for(auto i:op)
	cout<<i<<" ";
}

int main() {
	vector<int>arr={4,5,2,10,8};
	cout<<"Nearest Smaller to left \n";
	solve1(arr);
	cout<<"\nNearest Smaller to right \n";
	solve2(arr);

	return 0;
}