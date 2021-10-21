#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<pair<int, int>> l; //edge list
public:
    int findSet(int i, int parent[])
    {
        if (parent[i] == -1)
        {
            return i;
        }
        return parent[i] = findSet(parent[i], parent);
    }
};