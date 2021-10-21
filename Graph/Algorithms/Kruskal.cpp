using namespace std;
#include <bits/stdc++.h>
#define rep(i, n) for (auto i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
#define sqr(x) ((x) * (x))
#define pb push_back
#define ff first
#define ss second
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int, int> mii;
typedef map<st, int> msi;
const int N = 1e5 + 6;

//DSU 
vi parent(N);
vi sz(N);
void make_set(int v)
{
    parent[v] = v;
    sz[v] = 1;
}
int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int32_t main()
{
    for (int i = 0; i < N; i++)
    {
        make_set(i);
    }
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.pb({w, u, v});
    }
    sort(all(edges));

    //iterate over all edges
    int cost = 0;
    cout << "********************************\n";

    for (auto i : edges)
    {
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find_set(u);
        int y = find_set(v);
        if (x == y)
        {
            continue;
        }
        else
        {
            cout << u << " " << v << endl;
            cost = cost + w;
            union_sets(u, v);
        }
    }
    cout << "********************************\n";

    cout << cost << endl;
}