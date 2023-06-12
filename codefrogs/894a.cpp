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
void solve()
{
    string s; cin >> s; 
    vector<char> v;
    map<int, pair<int, int>> mp;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='Q' || s[i]=='A') v.pb(s[i]);
    }
    ll k = v.size();ll ans = 0;
    ll front = 0, back = 0;
    for(ll i=0; i<k;i++)
    {
        // cout << v[i] << " ";
        if(v[i]=='A')
        {
            for(ll j=0; j<i; j++)
            {
                if(v[j]=='Q') front++;
            }
            for(ll j=i+1; j<k; j++)
            {
                if(v[j]=='Q') back++;
            }
            mp[i] = {front, back};
            front = 0; back = 0;
        }
    } 
    for(auto i:mp)
    {
        // cout << i.first << " " << i.second.first << " " << i.second.second << endl;
        ans += (i.second.first*i.second.second);
    }
    cout << ans << endl;
}

int main()
{
    FAST_IO;
    // int tt;cin >> tt;while (tt--)solve();
    solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}