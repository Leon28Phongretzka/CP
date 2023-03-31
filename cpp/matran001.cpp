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
#define Len 1005
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;


// use DP to find the longest path from (0,0) to column n
int matran001(vector<vector<int>> a, int n, int m)
{
    int res = 0;
    vector<vector<int>> dp(Len, vector<int>(Len, 0));
    for(int i=0; i<n; i++) dp[i][0] = a[i][0];
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]))+a[i][j];
        }
    }
    for(int i=1; i<n; i++) res = max(res, dp[i][m-1]);
    return res;
}

void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<int>> a(Len, vector<int>(Len));
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> a[i][j];
    vector<vector<int>> b(m, vector<int>(n));
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) b[j][i] = a[i][j];
    // cout << matran001(b,n,m) << endl;
    int res = 0;
    vector<vector<int>> dp(Len, vector<int>(Len, 0));
    for(int i=0; i<n; i++) dp[i][0] = b[i][0];
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]))+b[i][j];
        }
    }
    for(int i=1; i<n; i++) res = max(res, dp[i][m-1]);
    cout << res << endl;

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
