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

void solve()
{
    int a,b; cin >> a >> b;
    vector<int> plus1, div2, ans;
    while(a!=b)
    {
        if(a>b)
        {
            cout << a-b << endl;
        }
        else
        {
            if(b%2==0)
            {
                b/=2;
                div2.pb(b);
            }
            else
            {
                b++;
                plus1.pb(b);
            }
        }
    }

}
int main()
{
    FAST_IO;
    // solve();
    int tt; cin >> tt; while (tt--) solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
