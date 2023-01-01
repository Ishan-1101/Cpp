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
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

class Solution
{
public:
    int distinctPrimeFactors(vector<int> &a) {
        unordered_set<int> m;
        for (int i = 0; i < a.size(); i++)
        {
            int sq = sqrt(a[i]);
                for (int j = 2; j <= sq; j++){
                if (a[i] % j == 0){   
                    m.insert(j);
                    while (a[i] % j == 0){
                        a[i] /= j;
                    }
                }
        }
        if (a[i] > 1){
                m.insert(a[i]);
            }
        }
            return m.size(); 
    }
};

int main()
{

    Solution leetcode2IDE;
    vector<int> nums1 = {2, 4, 3, 7, 10, 6};
    int output_1 = 4;
    if (leetcode2IDE.distinctPrimeFactors(nums1) == output_1)
    {
        cout << "Sample #1 : Accepted" << endl;
    }
    else
    {
        cout << "Sample #1 : Wrong Answer" << endl;
    }

    vector<int> nums2 = {2, 4, 8, 16};
    int output_2 = 1;
    if (leetcode2IDE.distinctPrimeFactors(nums2) == output_2)
    {
        cout << "Sample #2 : Accepted" << endl;
    }
    else
    {
        cout << "Sample #2 : Wrong Answer" << endl;
    }

    return 0;
}
