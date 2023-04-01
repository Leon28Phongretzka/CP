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
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;
vector<vector<ll>> dp(Len, vector<ll>(Len));
void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<ll>> a(Len, vector<ll>(Len));
    for(ll i=0; i<n; i++) for(ll j=0; j<m; j++) cin >> a[i][j];
    
    dp[0][0] = a[0][0];
    
    for(ll i=1; i<=n; i++) dp[i][0] = dp[i-1][0] + a[i][0];
    for(ll i=1; i<=m; i++) dp[0][i] = dp[0][i-1] + a[0][i];

    ll ans = 0;

    for(ll i=1; i<n; i++) 
    {
        for(ll j=1; j<m; j++) 
        {
            dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1])) + a[i][j];
        }
    }

    // for(ll i=0; i<n; i++)
    // {
    //     for(ll j=0; j<m; j++) cout << dp[i][j] << " ";
    //     cout << endl;
    // }

    ans = dp[n-1][m-1];
    cout << ans << endl;
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