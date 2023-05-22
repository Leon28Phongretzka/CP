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

int dp[Len][Len];
void solve()
{
    string a, b; cin >> a >> b;
    // cout << a << " " << b << endl;
    int n = sz(a), m = sz(b);
    memset(dp, 0, sizeof(dp));

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]) + 1;
            }
        }
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[n][m] << endl;


    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < m; j++)
    //     {
    //         if(a[i]==b[j]) dp[i+1][j+1] = dp[i][j] + 1;
    //         else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
    //     }
    // }
    // cout << sz(a) + sz(b) - dp[n][m] << endl;
}

int main()
{
    FAST_IO;
    int tt; cin >> tt;
    while (tt--)
    {
        // cin.ignore();
        solve();
    }
    // solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}