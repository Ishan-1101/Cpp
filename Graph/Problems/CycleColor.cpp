// directed graph
#include <bits/stdc++.h>
using namespace std;

enum Color
{
    WHITE,
    GRAY,
    BLACK
};

class Graph
{
    int V;          // No. of vertices
    list<int> *adj; // adjacency lists

public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int v, int w)
    {
        adj[v].push_back(w); // Add w to v's list.
    }
    
    bool DFSUtil(int u, int color[])
    {
        color[u] = GRAY;

        // Iterate through all adjacent vertices
        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            int v = *i; // An adjacent of u

            // If there is
            if (color[v] == GRAY)
                return true;

            // If v is not processed and there is a back
            // edge in subtree rooted with v
            if (color[v] == WHITE && DFSUtil(v, color))
                return true;
        }

        // Mark this vertex as processed
        color[u] = BLACK;

        return false;
    }

    bool isCyclic()
    {
        // Initialize color of all vertices as WHITE
        int *color = new int[V];
        for (int i = 0; i < V; i++)
            color[i] = WHITE;

        // Do a DFS traversal beginning with all
        // vertices
        for (int i = 0; i < V; i++)
            if (color[i] == WHITE)
                if (DFSUtil(i, color) == true)
                    return true;

        return false;
    }
};
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    if (g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";

    return 0;
}
