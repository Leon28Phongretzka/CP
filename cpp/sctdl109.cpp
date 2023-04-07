#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cerr.tie(0)
typedef long long ll;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define forr(i, a, b) for (ll i = a; i >= b; i--)
#define fora(i, n) for (auto i : n)
#define Len 100005
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;

class Graph
{
    public:
        map<int, bool> visited;
        map<int, list<int>> adj;
        int parent[1005];
        void addEdge(int u, int v);
        void DFS(int v);
        void DFS_Path(int u);
        void Path(int u, int v);
};

void Graph::addEdge(int u, int v)
{
    adj[u].pb(v);
    // adj[v].pb(u);
}

void Graph::DFS(int v)
{
    visited[v] = true;
    cout << v << " ";
    for(auto i: adj[v])
    {
        if(!visited[i])
            DFS(i);
    }
}

void Graph::DFS_Path(int u)
{
    visited[u] = true;
    for(int v : adj[u])
    {
        if(!visited[v])
        {
            parent[v] = u;
            DFS_Path(v);
        }
    }
}

void Graph::Path(int u, int v)
{
    int tmp = v;
    memset(parent, -1, sizeof(parent));
    DFS_Path(u);
    if(!visited[v]) cout << -1 << endl;
    else
    {
        vector<int> path;
        while(v != u)
        {
            path.pb(v);
            v = parent[v];
        }
        path.pb(u);
        reverse(path.begin(), path.end());
        for(auto i: path) cout << i << " ";
    }
}
void solve()
{
    int n,m,k1,k2; cin >> n >> m >> k1 >> k2;
    Graph g;
    for(int i=0; i<m; i++)
    {
        int u,v; cin >> u >> v;
        g.addEdge(u,v);
    }
    g.Path(k1,k2); cout << endl;
}
int main()
{
    FAST_IO;
    // solve();
    int tt; cin >> tt; while (tt--) solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}