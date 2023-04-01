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

long long sym_length(string s)
{
    long long n = s.size();
    long long ans = 0, l = 0;
    for(ll i=0; i<s.length(); i++)
    {
        for(ll j=i; j<s.length(); j++)
        {
            ll flag = 1;
            for(ll k=0; k<=(j-i)/2; k++)
            {
                if(s[i+k] != s[j-k])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                ans = max(ans, j-i+1);
            }
        }
    }
    return ans;
}

void solve()
{
    string s; cin >> s;
    ll ans = -MOD;
    ans = max(ans, sym_length(s));
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