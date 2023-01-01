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
    int countDigits(int num) {
        vi digs;
        int n = num;
        while(n > 0) {
            int dig = n % 10;
            digs.pb(dig);
            n /= 10;
        }
        // for(auto d : digs)
        // cout<<d<<" "<<endl;
        int count = 0;
        for(auto dig : digs) {
            if(num % dig == 0)
            count ++;
        }

        return count;
    }
};


int main() {
	
	Solution leetcode2IDE;
	int num1 = 7;
	int output_1 = 1;
	if(leetcode2IDE.countDigits(num1)==output_1){
		cout << "Sample #1 : Accepted" << endl;
	}else{
		cout << "Sample #1 : Wrong Answer" << endl;
	}

	int num2 = 121;
	int output_2 = 2;
	if(leetcode2IDE.countDigits(num2)==output_2){
		cout << "Sample #2 : Accepted" << endl;
	}else{
		cout << "Sample #2 : Wrong Answer" << endl;
	}

	int num3 = 1248;
	int output_3 = 4;
	if(leetcode2IDE.countDigits(num3)==output_3){
		cout << "Sample #3 : Accepted" << endl;
	}else{
		cout << "Sample #3 : Wrong Answer" << endl;
	}

	


	return 0;
}
	