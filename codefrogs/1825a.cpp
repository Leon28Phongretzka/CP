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
    int n = sz(s);
    vector<ll> alp(27);
    for(ll i=0; i<n; i++)
    {
        alp[s[i]-'a']=1;
    }
    ll thonk = 0;
    for(ll i=0; i<27; i++)
    {
        // cout << alp[i] << " ";
        if(alp[i]==1) thonk++;
    }
    // cout << thonk << endl;
    if(thonk==1) cout << -1 << endl;
    else
    {
        cout << n-1 << endl;
    }
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