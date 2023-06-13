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
    int n = s.size();
    ll ans = 0, neg = 0;
    map<char,int> m;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A') m[s[i]] = 1;
        else if(s[i]=='B') m[s[i]] = 10;
        else if(s[i]=='C') m[s[i]] = 100;
        else if(s[i]=='D') m[s[i]] = 1000;
        else if(s[i]=='E') m[s[i]] = 10000;
    }

    for(int i=s.length()-1; i>=0; i--)
    {
        int x = m[s[i]];
        if(x>=neg)
        {
            ans += x;
            neg = x;
        }
        else
        {
            ans -= x;
            neg = x;
        }
    }
    cout << ans << endl;
    
}

int main()
{
    FAST_IO;
    int tt;cin >> tt;while (tt--)solve();
    // solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}