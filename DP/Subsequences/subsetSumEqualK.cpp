#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
 
bool f(vector<int>& arr, int idx, int k) {
    // base cases
    if(k == 0)  return true;
    if(idx == 0)    return arr[0] == k;

    // explore possibilities
    bool not_take = f(arr, idx - 1, k);
    bool take = false;
    if(arr[idx] <= k)   take = f(arr, idx - 1, k - arr[idx]);

    return take or not_take;
}

bool subset_sum_equal_to_k(vector<int>& arr, int k) {
    int n = arr.size();
    return f(arr, n - 1, k);
}

int main()
{
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    int target; cin >> target;
    bool ans = subset_sum_equal_to_k(arr, target);  
    cout << ans;
    return 1; 
}