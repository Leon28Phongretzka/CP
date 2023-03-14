#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cerr.tie(0)
typedef long long ll;
typedef long double ld;
typedef vector<pair<ll, ll>> vpll;
typedef map<long long, long long> mpll;
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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    vector<pair<ll, ll>> v;
    ll res = 0, k = 0;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    for (ll i = 0; i < n; i++)
        v.pb(mp(a[i], b[i]));
    sort(v.begin(), v.end(), [](pair<ll, ll> &a, pair<ll, ll> &b)
         { return a.second < b.second; });
    // for (ll i = 0; i < n; i++)
    //     cout << v[i].first << " " << v[i].second << endl;
    for (ll i = 0; i < n; i++)
    {
        if (v[i].first >= k)
        {
            res++;
            k = v[i].second;
        }
    }
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
