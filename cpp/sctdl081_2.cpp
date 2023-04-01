#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cerr.tie(0)
typedef long long ll;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define forr(i, a, b) for (ll i = a; i >= b; i--)
#define fora(i, n) for (auto i : n)
#define Len 1001
#define MaxDP 100006
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;
vector<vector<ll>> dp(Len, vector<ll>(Len));
vector<ll> dp1(MaxDP, 0);

int depth(string s)
{
    int n = s.size();
    if(n==0) return 0;
    if(s[0] =='l') return 1;
    int l = 0, r = 0;
    int i = 1;
    while(i<n && s[i] == 'l')
    {
        l++;
        i++;
    }
    while(i<n && s[i] == 'l')
    {
        r++;
        i++;
    }
    return max(findDepth(s.substr(1, left + 1)) + 1, findDepth(s.substr(left + 1, n)) + 1);
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    cout << depth(s) << endl;

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