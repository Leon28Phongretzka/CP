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
    string s; cin >> s;
    long long pw[s.length() + 1];
    pw[0] = 1;
    for (int i = 1; i <= (int)s.length(); ++i) {
        pw[i] = pw[i - 1] * 10 % MOD;
    }
    long long sum[s.length() + 1];
    sum[0] = pw[0];
    for (int i = 1; i <= (int)s.length(); ++i) {
        sum[i] = sum[i - 1] + pw[i];
        sum[i] %= MOD;
    }
    long long ans = 0;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        ans += (s[i] - '0') * (i + 1) * sum[n - 1 - i];
        ans %= MOD;
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