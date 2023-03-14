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
    ld n, k;
    cin >> n >> k;
    vector<ld> v1;
    vector<ld> v2;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.pb(x);
        v2.pb(abs(x - k));
    }
    for(ll i=0; i<n-1; i++)
    {
        for(ll j=i+1; j<n; j++)
        {
            if(v2[i] > v2[j])
            {
                swap(v2[i], v2[j]);
                swap(v1[i], v1[j]);
            }
        }
    }
    for (auto i : v1)
        cout << i << " ";
    cout << endl;
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
