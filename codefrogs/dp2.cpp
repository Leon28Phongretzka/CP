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
ll n;
vector<ll> dp(n+1,0);

ll cmp(pair<ll, pair<ll,ll>> a, pair<ll, pair<ll,ll>> b)
{
    return a.second.second < b.second.second;
}

ll BinSearch(vector<pair<ll, pair<ll,ll>>> &v, ll i)
{
    int l = 0, r = i-1;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(v[mid].second.second <= v[i].second.first)
        {
            if(v[mid+1].second.second <= v[i].second.first)
            {
                l = mid+1;
            }
            else
            {
                return mid;
            }
        }
        else
        {
            r = mid-1;
        }
    }
    return -1;
}

ll maxProfit(vector<pair<ll, pair<ll,ll>>> &v, ll n)
{
    vector<ll> dp(n+1,0);
    dp[0] = v[0].first;
    for(ll i=1; i<n; i++)
    {
        ll incl = v[i].first;
        ll l = BinSearch(v,i);
        if(l!=-1)
        {
            incl += dp[l];
        }
        dp[i] = max(incl, dp[i-1]);
    }
    return dp[n-1];
}

// void maxProfit_void(vector<pair<ll, pair<ll,ll>>> &v, ll n)
// {
//     sort(v.begin(), v.end(), cmp);
//     vector<ll> dp(n+1,0);
//     dp[0] = v[0].first;
//     for(ll i=1; i<n; i++)
//     {
//         ll incl = v[i].first;
//         ll l = BinSearch(v,i);
//         if(l!=-1)
//         {
//             incl += dp[l];
//         }
//         dp[i] = max(incl, dp[i-1]);
//     }
//     for(ll i=0; i<n; i++) cout << dp[i] << " "; cout << endl;
// }

void solve()
{
    cin >> n;
    vector<pair<ll, pair<ll,ll>>> v;
    for(ll i=0; i<n; i++)
    {
        ll s,f,p; cin >> s >> f >> p;
        v.pb(mp(p,mp(s,f)));
        // cout << v[i].first << " " << v[i].second.first << 
        // " " << v[i].second.second << endl;
    }
    // maxProfit_void(v,n);
    cout << maxProfit(v,n) << endl;
}

int main()
{
    FAST_IO;
    // int tt;cin >> tt;while (tt--)solve();
    solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}