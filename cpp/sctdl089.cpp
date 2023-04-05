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
#define Len 1001
#define MaxDP 506
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;

int n,m;
int dp[MaxDP][MaxDP];

queue<pair<int, int>> q;

bool isValid(int x, int y) 
{
    return (x > 0 && x <= n && y > 0 && y <= m);
}


int bfs() {
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    int days = 0;
    while (!q.empty()) 
    {
        int size = q.size();
        while (size--) 
        {
            pair<int, int> c = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) 
            {
                int x = c.first + dx[i];
                int y = c.second + dy[i];
                if (isValid(x, y) && dp[x][y] == 1) 
                {
                    dp[x][y] = 2;
                    q.push({x, y});
                }
            }
        }
        days++;
    }

    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=0; j<=m; j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (dp[i][j] == 1)
                return -1;
        }
    }
    return days - 1;
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) 
        {
            cin >> dp[i][j];
            if (dp[i][j] == 2)
                q.push({i, j});
        }

    cout << bfs() << endl;
}
int main()
{
    FAST_IO;
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    // solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
