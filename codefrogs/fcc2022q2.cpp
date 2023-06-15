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
ll a[Len];
void solve()
{
    ll n,k,sum = 0, cnt = 0, res; cin >> n >> k;
    // vector<ll> a(Len);
    for(ll i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    // sort(a.begin()+1, a.begin()+n+1);
    for(ll i=1; i<=n; i++)
    {
        res = a[i];
        cnt++;
        while(a[i+1]==res)
        {
            cnt++;
            i++;
        }
        sum+=cnt%k;
        cnt=cnt/k;
        res++;
        while(!(cnt==0||res==a[i+1]))
        {
            sum+=cnt%k;
            cnt=cnt/k;
            res++;
        }
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