/*
NO RESTRICTION ON NUMBER OF CUTS ---->Unbounded Knapsack format
Given: Length of the rod (N) or length[] and price[]
MAXIMIZE the profit
eg: length[] ={1,2,3,4,5,6,7,8} , N=8 , price[] ={1,5,8,9,10,16,17,20}
o/p: 22 profit (parts 2 and 6 have been selected)
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

//changes from knapsack wt[]->len[] val[]->price[] W->N

int main()
{
    int N;
    printf("Enter Length of the rod:\n");
    scanf("%d", &N);
    vector<int> len(N);
    vector<int> price(N);
    for (int i = 1; i <= N; i++)
        len[i - 1] = i;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the price of part #" << i + 1 << endl;
        cin >> price[i];
    }
    // cout << profit(N, len, price) << endl;
    return 0;
}