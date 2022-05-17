#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<vector<int>> tree(N);
vector<bool> visit(N);

void dfs(int node)
{
    visit[node] = true;
    cout << node << " ";
    for (int nbr : tree[node])
    {
        if (!visit[nbr])
        {
            dfs(nbr);
        }
    }
}

int main()
{
    int nodes;
    cin >> nodes;
    for (int i = 0; i < nodes - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1);
    return 0;
}