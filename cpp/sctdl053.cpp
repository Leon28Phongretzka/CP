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

string transform( ll n )
{
    if(n==0||n==1) return to_string(n);
    string s = "";
    ll x = n/2;
    ll y = n%2;
    s = transform(x) + to_string(y) + transform(x);
    return s;

}
void solve()
{
    ll n,l,r; cin >> n >> l >> r;
    string s = transform(n);
    ll ans = 0;
    for(ll i = l-1; i<r; i++)
    {
        if(s[i]=='1') ans++;
    }
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