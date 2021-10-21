//cycle detection using disjoint set DS
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<pair<int, int>> l; //edge list
public:
    Graph(int V)
    {
        this->V = V;
    }
    void addEdge(int u, int v)
    {
        l.push_back(make_pair(u, v));
    }

    // implement find and union
    int findSet(int i, int parent[])
    {
        if (parent[i] == -1)
        {
            return i;
        }
        return findSet(parent[i], parent);
    }
    void unionSet(int a, int b, int parent[])
    {
        int s1 = findSet(a, parent);
        int s2 = findSet(b, parent);
        if (s1 != s2)
        {
            parent[s2] = s1;
        }
    }
    bool containsCycle()
    {
        int *parent = new int[V];
        for (int i = 0; i < V; i++)
        {
            parent[i] = -1;
        }
        //iterate over edge list
        for (auto edge : l)
        {
            int i = edge.first;
            int j = edge.second;
            int s1 = findSet(i, parent);
            int s2 = findSet(j, parent);
            if (s1 != s2)
            {
                unionSet(s1, s2, parent);
            }
            else
            {
                return true;
            }
        }
        delete[] parent;
        return false;
    }
};
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    if (g.containsCycle() == 1)
        cout << " Cycle exists " << endl;
    else
        cout << " Cycle does not exist " << endl;
}