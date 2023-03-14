#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cerr.tie(0)
typedef long long ll;
typedef long double ld;
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
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    ll k1 = max_element(a.begin(), a.end()) - a.begin();
    ll k2 = max_element(b.begin(), b.end()) - b.begin();
    k1 = a[k1];
    k2 = b[k2];
    if (k1 > k2)
        swap(a, b);
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    // for(ll i=0; i<n; i++) cout << a[i] << " "; cout << endl;
    // for(ll i=0; i<n; i++) cout << b[i] << " "; cout << endl;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
        ans += a[i] * b[i];
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
