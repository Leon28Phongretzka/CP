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
void s047(ll sum)
{
    int a4=0, a7=0;
    while(sum > 0)
    {
        if(sum%7==0)
        {
            a7++;
            sum-=7;
        }
        else if(sum%4==0)
        {
            a4++;
            sum-=4;
        }
        else
        {
            a4++;
            sum-=4;
        }
    }
    if(sum<0) cout << -1 << endl;
    else
    {
        forn(i, 0, a4) cout << 4;
        forn(i, 0, a7) cout << 7;
        cout << endl;
    }
}
void solve()
{
    ll n; cin >> n;
    s047(n);
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
