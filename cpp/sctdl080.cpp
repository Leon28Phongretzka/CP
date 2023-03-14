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


// use DP to find the longest string has descending order

void szn080(string s)
{
    int n = sz(s);
    vector<ll> dp(n+1, 1);
    ll res = 1;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(s[j] <= s[i] - 1)
            {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        // cout << dp[i] << " ";
        res = max(res, dp[i]);
    }
    cout << res << endl;
}


void solve()
{
    string s; cin >> s;
    int n = sz(s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    szn080(s);

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
