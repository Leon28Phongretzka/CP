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
    int n; cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    // ll l = 0, r = 0;
    ll max_size = 0;
    ll max_val = *max_element(a.begin(), a.end()); 
    // cout << max_val;
    ll min_val = 1e9;

    for(int i=1; i<=max_val; i++)
    {
        ll size = 0;
        for(int j=0; j<n; j++)
        {
            if(a[j] >= i)
            {
                size++;
            }
            else
            {
                size = 0;
            }
            max_size = max(max_size, size*i);
        }
    }
    cout << max_size << endl;
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