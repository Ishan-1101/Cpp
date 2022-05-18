// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 10;
// static int dp[101][101];

// int main()
// {
//     string str1, str2;
//     cout << "Enter two strings:\n";
//     cin >> str1 >> str2;
//     int n = str1.length();
//     int m = str2.length();
//     dp[n + 1][m + 1];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//         {
//             if (i == 0 || j == 0)
//                 dp[i][j] = 0;
//         }
//     memset(dp, -1, sizeof(dp));
//     cout << "Output:" << lcs(str1, str2, n, m);
//     return 0;
// }