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
        void addEdge(int u, int v);
        void DFS(int v);
        void DFS_Path(int u);
        void BFS(int v);
};

void Graph::addEdge(int u, int v)
{
    adj[u].pb(v);
    adj[v].pb(u);
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
    for(auto i: adj[u])
    {
        if(!visited[i])
        {
            cout << u << " " << i << endl;
            DFS_Path(i);
        }
    }
}

void Graph::BFS(int v)
{
    queue<int> q;
    q.push(v);
    visited[v] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(auto i: adj[u])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

void solve()
{
    int n,m,k; cin >> n >> m >> k;
    Graph g;
    for(int i=0; i<m; i++)
    {
        int u,v; cin >> u >> v;
        g.addEdge(u,v);
    }
    g.BFS(k); cout << endl;
    
}
int main()
{
    FAST_IO;
    // solve();
    int tt; cin >> tt; while (tt--) solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}