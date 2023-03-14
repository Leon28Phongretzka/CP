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
const int MOD = 1e9+7;
typedef vector<vector<ll>> matrix;


void solve()
{
    int n; cin >> n;
    vector<int> a(10);
    for(int i=0;i<10;i++)
    {
        a[0] = 1;
        a[1] = 2;
        a[2] = 5;
        a[3] = 10;
        a[4] = 20;
        a[5] = 50;
        a[6] = 100;
        a[7] = 200;
        a[8] = 500;
        a[9] = 1000;
    }
    int res = 0;
    for(int i=9;i>=0;i--)
    {
        while(n>=a[i])
        {
            n-=a[i];
            res++;
        }
    }
    cout << res << endl;
}

int main()
{
    FAST_IO;
    int tt; cin >> tt; while (tt--) solve();
    // solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
