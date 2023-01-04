// https://www.codechef.com/INTPREP_01/problems/PREP06

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
 
void solve(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());
    int st = 0;
    int end = n - 1;
    while(st < end) {
        swap(arr[st], arr[st+1]);
        st += 2;
        swap(arr[end], arr[end-1]);
        end -= 2;
    }
}

void print(vector<int>& arr) {
    for(auto it : arr)
    cout << it << " ";
}

int main()
{
    int n; cin >> n;    
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    cin >> arr[i];
    solve(arr, n);
    print(arr);
    return 0;
}