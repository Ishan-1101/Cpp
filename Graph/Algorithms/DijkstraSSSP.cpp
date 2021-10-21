#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Graph
{
    unordered_map<T, list<pair<T, int>>> m;

public:
    void addEdge(T u, T v, int dist, bool bidir = true)
    {
        m[u].push_back(make_pair(v, dist));
        if (bidir)
            m[v].push_back(make_pair(u, dist));
    }
    void print()
    {
        //iterate over all key value pairs in the map
        for (auto j : m)
        {
            cout << j.first << "---->"; // j.first is the key value
            //iterate over the list of cities
            for (auto l : j.second)
            {
                cout << "(" << l.first << " , " << l.second << ")";
            }
            cout << endl;
        }
    }
    void dijkstraSSSP(T src)
    {
        unordered_map<T, int> dist;
        for (auto j : dist)
            dist[j.first] = INT_MAX;

        //make set to find node with min dist
        set<pair<int, T>> s; //sorting in set is according to the first parameter
        dist[src] = 0;
        s.insert(make_pair(0, src));

        while (!s.empty())
        {
            //find pair at the front
            auto p = *(s.begin());
            T node = p.second;
            int nodeDist = p.first;
            s.erase(s.begin());
            //iterate over nbrs of current node
            for (auto childPair : m[node])
            {

                if (nodeDist + childPair.second < dist[childPair.first])
                {
                    //remove old pair and insert new pair
                    T dest = childPair.first;
                    auto f = s.find(make_pair(dist[dest], dest));
                    if (f != s.end())
                        s.erase(f);
                    //insert new pair
                    s.insert(make_pair(dist[dest], dest));
                }
            }
        }
        //print distances
        for (auto d : dist)
        {
            cout << d.first << " is located at a distance of " << d.second << endl;
        }
    }
};

int main()
{
    Graph<string> india;
    india.addEdge("Amritsar", "Delhi", 1);
    india.addEdge("Amritsar", "Jaipur", 4);
    india.addEdge("Jaipur", "Delhi", 2);
    india.addEdge("Jaipur", "Mumbai", 8);
    india.addEdge("Bhopal", "Agra", 2);
    india.addEdge("Mumbai", "Bhopal", 3);
    india.addEdge("Agra", "Delhi", 1);
    india.print();
    india.dijkstraSSSP("Amritsar");
}

/*
#include<iostream>
#include<climits>
using namespace std;

int miniDist(int distance[], bool Tset[]) // finding minimum distance
{
    int minimum=INT_MAX,ind;
              
    for(int k=0;k<6;k++) 
    {
        if(Tset[k]==false && distance[k]<=minimum)      
        {
            minimum=distance[k];
            ind=k;
        }
    }
    return ind;
}

void DijkstraAlgo(int graph[6][6],int src) // adjacency matrix 
{
    int distance[6]; // // array to calculate the minimum distance for each node                             
    bool Tset[6];// boolean array to mark visited and unvisited for each node
    
     
    for(int k = 0; k<6; k++)
    {
        distance[k] = INT_MAX;
        Tset[k] = false;    
    }
    
    distance[src] = 0;   // Source vertex distance is set 0               
    
    for(int k = 0; k<6; k++)                           
    {
        int m=miniDist(distance,Tset); 
        Tset[m]=true;
        for(int k = 0; k<6; k++)                  
        {
            // updating the distance of neighbouring vertex
            if(!Tset[k] && graph[m][k] && distance[m]!=INT_MAX && distance[m]+graph[m][k]<distance[k])
                distance[k]=distance[m]+graph[m][k];
        }
    }
    cout<<"Vertex\t\tDistance from source vertex"<<endl;
    for(int k = 0; k<6; k++)                      
    { 
        char str=65+k; 
        cout<<str<<"\t\t\t"<<distance[k]<<endl;
    }
}

int main()
{
    int graph[6][6]={
        {0, 1, 2, 0, 0, 0},
        {1, 0, 0, 5, 1, 0},
        {2, 0, 0, 2, 3, 0},
        {0, 5, 2, 0, 2, 2},
        {0, 1, 3, 2, 0, 1},
        {0, 0, 0, 2, 1, 0}};
    DijkstraAlgo(graph,0);
    return 0;                           
}
*/