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

struct triplet
{
    int x;
    int y;
    int cost;
};

int minReplacement(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    deque<triplet> qu;
    map<pair<int, int>> visited;
    int xdir[] = {-1, 1, 0, 0};
    int ydir[] = {0, 0, -1, 1};
    qu.push({0, 0, 0});
    int result = 0;
    while (not qu.empty())
    {
        auto curr = qu.front();
        qu.pop_front();
        visited.insert({curr.x,curr.y});
    }
    return result;
}

int32_t main()
{

    return 0;
}