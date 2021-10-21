#include <iostream>
#include <vector>
using namespace std;

vector<int> bellman_ford(int V, int src, vector<vector<int>> edges)
{
    //create a distance array/vector
    vector<int> dist(V + 1, INT_MAX);
    dist[src] = 0;
    //relax all edges v-1 times
    for (int i = 0; i < V - 1; i++)
    {
        for (auto edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            if (dist[u] != INT_MAX && dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    //-ve wt cycle
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
        if (dist[u] != INT_MAX && dist[v] > dist[u] + w)
        {
            cout << "Negative wt cycle" << endl;
            exit(0);
        }
    }

    return dist;
}

int main()
{

    int n, m;
    cin >> n >> m;

    //EDGE LIST
    vector<vector<int>> edges; //(a,b,3) etc

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }
    //graph has been created

    //BELLMAN FORD
    vector<int> distances = bellman_ford(n, 1, edges);
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " is at a distance " << distances[i] << endl;
    }

    return 0;
}