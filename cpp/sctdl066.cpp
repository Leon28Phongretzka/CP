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
#define MaxDP 100006
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;
vector<vector<ll>> dp(Len, vector<ll>(Len));
vector<ll> dp1(MaxDP, 0);
void solve()
{
    int n,k; cin >> n >> k;
    dp1[0] = 1;
    for(ll i=1; i<n+1; i++)
    {
        dp1[i] = 0;
        for(ll j=1; j<k+1; j++)
        {
            if(i-j >= 0) dp1[i] = (dp1[i] + dp1[i-j]) % MOD;
        }
    }
    cout << dp1[n] << endl;
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