#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

bool possible() {
    
}

int main()
{
    cout << "\nEnter size of array : ";
    int n; cin >> n;
    vector<int> arr(n);
    cout << "Now enter elements : \n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter target sum of subsets : ";
    int sum; cin >> sum;
    if(possible(arr, sum))  cout << "TRUE"<< endl;
    else cout << "FALSE" << endl;
    return 0;
}