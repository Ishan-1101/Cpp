#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<vector<int>> tree(N);
vector<bool> visited(N);
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

    queue<int> q; //If we use stack instead of queue it will work as an iterative version of DFS
    q.push(1);
    visited[1] = true;
    while (!q.empty())
    {
        int node = q.front();
        cout << node << " ";
        q.pop();
        for (int nbr : tree[node])
        {
            if (!visited[nbr])
            {
                visited[nbr] = true;
                q.push(nbr);
            }
        }
    }

    return 0;
}