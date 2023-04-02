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

ll reacfacct(ll start, ll n)
{
    ll i;
    if(n<=16)
    {
        ll r = start;
        for( i = start + 1; i < start + n; i++)
            r *= i;
        return r;
    }
    i = n / 2;
    return reacfacct(start, i) * reacfacct(start + i, n - i);
}

ll gt(ll n)
{
    return reacfacct(1, n);
}

ll C(ll k, ll n)
{
    return gt(n) / (gt(k) * gt(n - k));
}


void solve()
{
    ll n,k; cin >> n >> k;
    ll res = 2*C(k, n);
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
