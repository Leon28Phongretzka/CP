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


// use DP to find the longest path from (0,0) to column n
void matran001(vector<vector<int>> a, int n, int m)
{
    int res = 0;
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for(int i=0; i<n; i++) dp[i][0] = a[i][0];
    for(int j=1; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(i==0) dp[i][j] = max(dp[i][j-1], dp[i+1][j-1]) + a[i][j];
            else if(i==n-1) dp[i][j] = max(dp[i][j-1], dp[i-1][j-1]) + a[i][j];
            else dp[i][j] = max(dp[i][j-1], max(dp[i-1][j-1], dp[i+1][j-1])) + a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<n; i++) res = max(res, dp[i][m-1]);
    cout << res << endl;
}

void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> a[i][j];
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<m; j++) 
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    matran001(a, n, m);
    int res = 0;  

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
