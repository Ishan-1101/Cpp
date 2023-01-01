#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define f(n) for (int i = 0; i < n; i++)
#define inf 1e18
#define mid(l, r) (l + (r - l) / 2)
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> ump;

class Solution
{
public:
// O(sqrt(n))
bool isPrime(int n) {
if (n <= 1) return false;
if (n <= 3)
return true;
if (n % 2 == 0 || n % 3 == 0)
return false;for (int i = 5; i * i <= n; i = i + 6)
if (n % i == 0 || n % (i + 2) == 0) return false;
return true;
}
    vector<int> closestPrimes(int L, int R) {
        int flag;
        vi ans;
        for (int i = L; i <= R; i++) {
            if(isPrime(i))
                ans.pb(i);
        }
        if(ans.size() < 2)  return {-1, -1};
        if(ans.size() == 2) return ans;

        vector<pair<int, int>> results;
        int diff = 0;
        pair<int, int> diff_p;
        for(int i=0; i<ans.size()-1; i++) {
            diff = ans[i+1] - ans[i];
            diff_p = make_pair(diff, i);
            results.pb(diff_p);
        }
        sort(results.begin(), results.end());
        int x, y;
        for(auto p : results){
         x = ans[p.second];
         y = ans[p.second+1];
        break;
        }
        // cout<< "compiled successfully"<< endl;
        return {x, y};
    
    }
};

int main()
{

    Solution leetcode2IDE;
    int left1 = 10;
    int right1 = 19;
    vector<int> output_1 = {11, 13};
    if (leetcode2IDE.closestPrimes(left1, right1) == output_1)
    {
        cout << "Sample #1 : Accepted" << endl;
    }
    else
    {
        cout << "Sample #1 : Wrong Answer" << endl;
    }

    int left2 = 4;
    int right2 = 6;
    vector<int> output_2 = {-1, -1};
    if (leetcode2IDE.closestPrimes(left2, right2) == output_2)
    {
        cout << "Sample #2 : Accepted" << endl;
    }
    else
    {
        cout << "Sample #2 : Wrong Answer" << endl;
    }

    return 0;
}
