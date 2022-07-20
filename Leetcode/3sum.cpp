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
const int N = 1e5 + 10;
vector<vi> ans;

void solve3sum(vi &nums)
{
    sort(nums.begin(), nums.end());
    if (nums.size() < 3)
        return;
    if (nums[0] > 0)
        return;

    for (int i = 0; i < nums.size(); i++)
    {
        // base case
        if (nums[i] > 0)
            break;
        if (i > 0 and nums[i] == nums[i - 1])
            continue;

        // similar to binary search
        int low = i + 1;
        int high = nums.size() - 1;
        int sum = 0;
        while (low < high) // search btw low and high pointer
        {
            sum = nums[i] + nums[low] + nums[high];
            if (sum > 0)
                high--;
            else if (sum < 0)
                low++;

            else
            {
                // we have found the required triplet
                ans.push_back({nums[i], nums[low], nums[high]});

                // to avoid duplicate triplets, we have to navigate to last occurences of num[low] and num[high]
                int last_low_occurence = nums[low];
                int last_high_occurence = nums[high];
                while (low < high and nums[low] == last_low_occurence)
                {
                    low++;
                }
                while (low < high and nums[high] == last_high_occurence)
                {
                    high--;
                }
            }
        }
    }
}

int main()
{
    vi v{-1, 0, 1, 2, -1, -4};
    solve3sum(v);
    for(auto vec:ans){
        cout<<endl;
        for(auto e:vec)
        cout<<e<<" ";
    }

    return 0;
}