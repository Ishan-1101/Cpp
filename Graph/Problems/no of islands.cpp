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

void dfs(vector<vector<int>> &grid, int r, int c)
{
    // base case
    if (r < 0 or c < 0 or r >= grid.size() or c >= grid[0].size() or grid[r][c]!=1)
        return;
    grid[r][c] = 0;
    int xdir[] = {-1, 1, 0, 0}; // UDLR
    int ydir[] = {0, 0, -1, 1}; // UDLR
    for (int d = 0; d < 4; d++)
    {
        dfs(grid, r + xdir[d], c + ydir[d]);
    }
}

int numOfIslands(vector<vector<int>> &grid)
{
    int result = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                // call dfs
                dfs(grid,i,j);
                result++;
            }
        }
    }
    return result;
}

int32_t main()
{

    return 0;
}
//time complexity = O(m*n)