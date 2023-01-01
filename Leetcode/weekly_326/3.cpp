#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define f(n) for (int i = 0; i < n; i++)
#define inf             1e18
#define mid(l,r)        (l+(r-l)/2)
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> ump;
#define w(x)  int x; cin>>x; while(x--)


class Solution {
public:
    int count_digits(int x) {
        int ans = 0;
        while(x) {
            ans += 1;
            x /= 10;
        }
        return ans;
    }
    int minimumPartition(string s, int k) {
        int n = s.length();
        int ans = 0;
        int num_digs = count_digits(k);
        for(int i=0; i<n-num_digs; i+=1) {
            // TO-DO
        }
        return 0;
    }
};


int main() {
	
	Solution leetcode2IDE;
	string s1 = "165462";
	int k1 = 60;
	int output_1 = 4;
	if(leetcode2IDE.minimumPartition(s1,k1)==output_1){
		cout << "Sample #1 : Accepted" << endl;
	}else{
		cout << "Sample #1 : Wrong Answer" << endl;
	}

	string s2 = "238182";
	int k2 = 5;
	int output_2 = -1;
	if(leetcode2IDE.minimumPartition(s2,k2)==output_2){
		cout << "Sample #2 : Accepted" << endl;
	}else{
		cout << "Sample #2 : Wrong Answer" << endl;
	}

	


	return 0;
}
	