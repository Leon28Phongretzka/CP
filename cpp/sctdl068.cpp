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
const long long Len = 5e5+5;
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
ll n,k;
long long dp[105][Len] = {1};
void solve()
{
    cin >> n >> k;
    for(ll i=0; i<=n; i++)
    {
        for(ll j=1; j<=k; j++)
        {
            dp[i][j] = 1;
        }
    }
    for(ll i=n-1; i>=0; i--)
    {
        for(ll j=0; j<k; j++)
        {
            dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
        }
    }
    for(ll i=1; i<=n; i++)
    {
        for(ll j=0; j<=k; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    

}

int main()
{
    FAST_IO;
    int tt;cin >> tt;while (tt--)solve();
    // solve();
    // ptr1eopen("input.txt", "r", stdin); ptr1eopen("output.txt", "w", stdout);
}