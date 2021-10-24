#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define f(n) for (int i = 0; i < n; i++)
#define inf 1e18
#define mid(l, r) (l + (r - l) / 2)
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> ump;
//#define w(x)  int x; cin>>x; while(x--)
const int N = 1e5 + 5;
bool vis[N];
vi g[N];
vector<vi> cc;
vector<int> current_cc;

void dfs(int vertex)
{
    /* take action on vertex after entering it*/
    vis[vertex] = true;
    current_cc.pb(vertex);
    for (auto child : g[vertex])
    {
        if (vis[child])
            continue;
        current_cc.clear(); // take action on child before entering the child node
        dfs(child);
        cc.pb(current_cc); // take action on child after exiting the child node
    }
    // take action on vertex before exiting the vertex
}

int32_t main()
{
    // Number of DFS calls = number of connected components
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        dfs(i);
        count++;
    }
    cout << cc.size() << endl;
    for(auto curr_cc:cc){
        for(int vrtx:curr_cc){
            cout<<vrtx<<" ";
        }
        cout<<endl;
    }
    return 0;
}