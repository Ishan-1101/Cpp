//Distance calculated by level order traversal is the shortest(For unweighted graph)
#include <bits/stdc++.h>
using namespace std;
class Graph
{
    map<int, list<int>> l;

public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(int src)
    {
        map<int, int> dist;
        queue<int> q;
        //fill other nodes with INT_MAX
        for (auto node_pair : l)
        {
            int node = node_pair.first;
            dist[node] = INT_MAX;
        }
        q.push(src);
        dist[src] = 0;

        while (!q.empty())
        {
            int node = q.front();
            // cout << node << endl;
            q.pop();

            for (int nbr : l[node])
            {
                if (dist[nbr] == INT_MAX)
                {
                    q.push(nbr);
                    dist[nbr] = dist[node] + 1; //mark that nbr as visited
                }
            }
        }
        //Print the distance to every node
        for (auto node_pair : l)
        {
            int node = node_pair.first;
            int d = dist[node];
            cout << "Node " << node << " Dist from src " << d << endl;
        }
    }
};
int main()
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.bfs(0);
    return 0;
}