#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int f(int index, vector<int>& arr, int target) {
    // base cases
    if(target == 0) return 1;
    if(index == 0)  return arr[0] == target;

    int not_take = f(index-1, arr, target);
    int take = 0;
    if(arr[index] <= target)    take = f(index-1, arr, target-arr[index]);

    return take + not_take;
}

int solve(vector<int>& arr, int target) {
    int n = arr.size();
    return f(n-1, arr, target);
}

int main()
{
    vector<int> v = {1,2,2,3};
    int sum = 6;
    // All the possible subsets are {1, 2, 3}, {1, 2, 3} and {3, 3}
    int ans = solve(v, sum);
    cout << ans;
    return 0;
}