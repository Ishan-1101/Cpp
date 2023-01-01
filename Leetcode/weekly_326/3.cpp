#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define f(n) for (int i = 0; i < n; i++)
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> ump;

class Solution {
public:
    int minimumPartition(string s, int k) {
        string otp = "";
        int ans = 0;
        
        for(auto ch : s) {
            otp.pb(ch);

            if(atol(otp.c_str()) > k) {
                otp.clear();
                ++ans;
                otp.pb(ch);
            }    
            if(atol(otp.c_str()) > k) {
                return -1;
            }

        }

        return ans+1;
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