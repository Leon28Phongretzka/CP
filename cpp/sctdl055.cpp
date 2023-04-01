#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<int> vi;
typedef vector<int>::iterator ip;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef vector<pui> vpui;
typedef vector<ul> vu;
typedef vector<string> vs;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= ll(n); i++)
#define fora(i, n) for (auto i : n)
#define Len 1005
#define MOD 1000000007

ll n, k;
// fast fibonacci number
ll pow(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

// fast fibonacci number
vector<int> fast_fib(int n) {
    if (n == 0) {
        return {0, 1};
    } else {
        vector<int> half = fast_fib(n / 2);
        int a = half[0];
        int b = half[1];
        int c = a * (2 * b - a);
        int d = a * a + b * b;
        if (n % 2 == 0) {
            return {c, d};
        } else {
            return {d, c + d};
        }
    }
}

void fib(ll n)
{
    ll a = 0, b = 1, c = 1;
    for(ll i = 3; i <= n; i++)
    {
        a = b;
        b = c;
        c = (a + b) % MOD;
    }
    cout << c << endl;
}

void solve()
{
    cin >> n;
    ll res = 0;
    cout << fast_fib(n)[0] << endl;
    
}

int main()
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    // solve();
}