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


int ans = 0;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool check(int dp[][MaxDP],int n,int m)
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (dp[i][j] == 1)
                return false;
    return true;
}

void solve()
{
    int n,m; cin >> n >> m;
    int dp[MaxDP][MaxDP];
    int days[MaxDP][MaxDP];
    memset(dp, 0, sizeof(dp));
    queue<pair<int, int>> q;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> dp[i][j];
            if(dp[i][j] == 2)
            {
                q.push({i, j});
            }
        }
    }

    while(!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();
        for(int k=0; k<4; k++)
        {
            int ii = top.first + dx[k];
            int jj = top.second + dy[k];
            if(ii >= 1 && ii <= n && jj >= 1 && jj <= m && dp[ii][jj] == 1)
            {
                dp[ii][jj] = 2;
                q.push({ii, jj});
                days[ii][jj] = days[top.first][top.second] + 1;
                ans = max(ans, days[ii][jj]);
            }
        }
    }

    if(check(dp, n, m))
        cout << ans << endl;
    else
        cout << "-1" << endl;
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
