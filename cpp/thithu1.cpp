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
#define Len 105
const double pi=3.14159265358979323846;
const int MOD = 1000000007;

ll A[Len], B[Len], C[Len];
ll dp[Len][Len][Len];

void solve()
{
    ll nA, nB, nC;
    cin >> nA; for(ll i=1; i<=nA; i++) cin >> A[i];
    cin >> nB; for(ll i=1; i<=nB; i++) cin >> B[i];
    cin >> nC; for(ll i=1; i<=nC; i++) cin >> C[i];

    memset(dp, 0, sizeof(dp));

    for(ll i=1; i<=nA; i++)
    {
        for(ll j=1; j<=nB; j++)
        {
            for(ll k=1; k<=nC; k++)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                }
                else
                {
                    dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
                }
            }
        }
    }

    cout << dp[nA][nB][nC] << endl;
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