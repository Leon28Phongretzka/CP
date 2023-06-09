#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld; 
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;

class Graph
{
    public:
        map<int, bool> visited;
        map<int, list<int>> adj;
        int parent[Len];
        void addEdge(int v, int w);
        void DFS(int v);
        long long ConnectedComponents(int n);
};

void Graph::addEdge(int v, int w)
{
    adj[v].pb(w);
}

void Graph::DFS(int v)
{
    visited[v] = true;
    for(auto i=adj[v].begin(); i!=adj[v].end(); i++)
    {
        if(!visited[*i])
        {
            DFS(*i);
        }
    }
}

long long Graph::ConnectedComponents(int n)
{
    ll ans = 1;
    for(auto i=1; i<=n; i++)
    {
        if(!visited[i])
        {
            ans++;
            DFS(i);
        }
    }
    return ans;

}

void solve()
{
    Graph g;
    long long n,m,cLib, cRoad;
    cin >> n >> m >> cLib >> cRoad;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        g.addEdge(u,v);
        g.addEdge(v,u);
    }
    g.DFS(1);
    long long ans = g.ConnectedComponents(n);
    // cout << ans << endl;
    ans = min(n*cLib, ans*cLib + (n-ans)*cRoad);
    cout << ans << endl;
    
    
}

int main()
{
    FAST_IO;
    int tt;cin >> tt;while (tt--)solve();
    // solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}