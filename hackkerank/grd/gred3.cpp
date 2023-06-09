#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld; 
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
string sort(string s)
{
    sort(s.begin(), s.end());
    return s;
}
void solve()
{
    ll n,k; cin >> n >> k;
    // cout << k << endl;
    vector<pair<ll, ll>> m;
    for(ll i=0; i<n; i++)
    {
        ll x; cin >> x;
        ll y; cin >> y;
        m.pb(mp(x,y));
    }
    sort(m.begin(), m.end());
    reverse(m.begin(), m.end());
    // for(auto i:m) cout << i.first << " " << i.second << endl;
    
    ll res = 0, pivot = 0;
    for(auto i:m)
    {
        if(i.second==0) res += i.first;
        else
        {
            if(pivot<k) 
            {
                res += i.first;
                pivot++;
            }
            else res -= i.first;
        }
    }
    cout << res << endl;

}

int main()
{
    FAST_IO;
    // int tt;cin >> tt;while (tt--)solve();
    solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}