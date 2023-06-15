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
const int Len=1e6+5;
const double pi=3.14159265358979323846;
const int MOD = 1000000007;

// vector<ll> dp(n+1,0);

ll cmp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.second < b.second;
}
// ll a[Len];
void solve()
{
    ll n,k,sum = 0; cin >> n >> k;
    if(n==1) {cout << 1 << endl; return;}
    // vector<ll> a(n);
    map<ll,ll> m;
    for(ll i=1; i<=n; i++) 
    {
        ll x; cin >> x;
        m[x]++;
    }
    // for(auto i:m) cout << i.first << " " << i.second << endl;
    for(auto &i:m)
    {
        while(i.second>=k)
        {
            // m of next i is i.second/k + m of next i
            m[i.first+1] += i.second/k;
            m[i.first] = m[i.first]%k;
            // sum+=i.second%k;
        }
        // cout << m[i.first] << " " << m[i.second] << endl;
    }
    for(auto i:m) 
    {
        // cout << i.first << " " << i.second << endl;
        sum+=i.second;
    }
    cout << sum << endl;
    
}

int main()
{
    FAST_IO;
    // int tt;cin >> tt;while (tt--)solve();
    solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}