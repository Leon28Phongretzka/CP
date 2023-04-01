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
long long dp[1005][1005];
void solve()
{
    int n,k; cin >> n >> k;
    vector<long long> a(n+3);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] = a[i] % k;
    }
    for(int i=1; i<k; i++) dp[1][i] = -1e18;
    dp[1][a[1]] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < k; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i-1][(j-a[i]+k)%k] + 1);
        }
    }
    cout << dp[n][0] << endl;
    
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
