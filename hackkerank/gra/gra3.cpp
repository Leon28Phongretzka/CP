#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100005;

vector<int> adj[MAXN];
int disc[MAXN], low[MAXN], parent[MAXN];
bool visited[MAXN];
int timer;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
void dfs(int u, vector<pair<int, int>>& bridges) {
    visited[u] = true;
    disc[u] = low[u] = ++timer;
    for (int v : adj[u]) {
        if (!visited[v]) {
            parent[v] = u;
            dfs(v, bridges);
            low[u] = min(low[u], low[v]);
            if (low[v] > disc[u]) {
                bridges.push_back({u, v});
            }
        } else if (v != parent[u]) {
            low[u] = min(low[u], disc[v]);
        }
    }
}

vector<pair<int, int>> findBridges(int n) {
    vector<pair<int, int>> bridges;
    timer = 0;
    for (int i = 1; i <= n; i++) {
        visited[i] = false;
        parent[i] = -1;
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i, bridges);
        }
    }
    return bridges;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<pair<int, int>> bridges = findBridges(n);
    for (int i=0; i<bridges.size()-1; i++) {
        for(int j=1; j<bridges.size(); j++) {
            if(!cmp(bridges[i], bridges[j])) {
                swap(bridges[i], bridges[j]);
            }
        }
    }
    for(auto i: bridges) {
        cout << i.first << " " << i.second << " ";
    }
    return 0;
}