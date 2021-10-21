#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    unordered_map<string, list<pair<string, int>>> l;

public:
    Graph(int V)
    {
        this->V = V;
    }
    void addEdge(string x, string y, bool bidir, int wt)
    {
        l[x].push_back(make_pair(y, wt));
        if (bidir)
            l[y].push_back(make_pair(x, wt));
    }
    void print()
    {
       for(auto p : l)
       {
           string city = p.first;
           list<pair<string, int>>nbrs=p.second;
           cout<<city<<"->";
           for(auto nbr:nbrs)
           {
               string destination=nbr.first;
               int distance=nbr.second;
               cout<<destination<<" "<<distance<<endl;
           }
           cout<<endl;
       }
    }
};
int main()
{
    Graph g(4);
    g.addEdge("A","B",true,20);
    g.addEdge("A","C",true,10);
    g.addEdge("A","D",false,50);
    g.addEdge("B","D",true,30);
    g.addEdge("C","D",true,40);
    g.print();
    return 0;
}