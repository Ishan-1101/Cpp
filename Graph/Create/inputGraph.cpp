#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;
typedef unordered_map<int, int> ump;
const int N= 1e3+10 ;
int graph1[N][N];    //Space complexity O(N^2)......N!=10^5 ....N<=10^3 or 10^4
vi graph2[N];        //Space complexity O(N+M)......M<10^7
int32_t main()
{
   int n,m;
   cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        graph1[u][v]=1;
        graph1[v][u]=1;
        graph2[u].pb(v);
        graph2[v].pb(u);
    }
    
    return 0;
}