// Leetcode Flood Fill
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
//#define w(x)  int x; cin>>x; while(x--)
const int N = 1e5 + 5;
vi g[N];

void dfs(int i, int j, vector<vector<int>> &image, int initialColor, int newColor)
{
    int n = image.size();
    int m = image[0].size();

    if (i < 0 or j < 0)
        return;
    if (i >= n or j >= m)
        return;
    if (image[i][j] != initialColor)
        return;
    image[i][j] = newColor;

    dfs(i + 1, j, image, initialColor, newColor);
    dfs(i - 1, j, image, initialColor, newColor);
    dfs(i, j + 1, image, initialColor, newColor);
    dfs(i, j - 1, image, initialColor, newColor);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int initialColor = image[sr][sc];
    // if (initialColor != newColor)
        dfs(sr, sc, image, initialColor, newColor);
    return image;
}

int32_t main()
{
    // Leetcode main

    return 0;
}