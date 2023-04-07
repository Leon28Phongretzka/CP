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
const int MOD = 1000000007;

ll s087(ll a, ll b)
{
    ll f[Len] = {};
    queue<int> q;
    q.push(a);
    ll ttt;
    while(sz(q))
    {
        ttt = q.front(); q.pop();
        if(ttt == b) return f[ttt];
        if((ttt << 1) < (b << 1) and !f[ttt << 1])
        {
            f[ttt << 1] = f[ttt] + 1;
            q.push(ttt << 1);
        }
        if(!f[ttt - 1])
        {
            f[ttt - 1] = f[ttt] + 1;
            q.push(ttt - 1);
        }
    }
    return -1;
}

void solve()
{
    ll a,b; cin >> a >> b;
    if(a>b) cout << a-b << endl;
    else cout << s087(a,b) << endl;

}
int main()
{
    FAST_IO;
    // solve();
    int tt; cin >> tt; while (tt--) solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
