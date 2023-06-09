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
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vector<ll> temp = {0,0};
    vector<vector<ll>> dp(n,temp);
    for(auto j=1;j<n;++j)
    {
        dp[j][0]=max(dp[j-1][1]+abs(a[j]-1),dp[j-1][0]+abs(a[j]-a[j-1]));
        dp[j][1]=max(dp[j-1][0]+abs(1-a[j-1]),dp[j-1][1]);
        cout << dp[j][0] << " " << dp[j][1] << endl;
    }

    cout << max(dp[n-1][0], dp[n-1][1]) << endl;
}

int main()
{
    FAST_IO;
    int tt;cin >> tt;while (tt--)solve();
    // solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}