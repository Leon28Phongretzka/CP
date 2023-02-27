#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<int> vi;
typedef vector<int>::iterator ip;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef vector<pui> vpui;
typedef vector<ul> vu;
typedef vector<string> vs;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= ll(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
#define MOD 1000000007
const ll N = 1e9+7;

long long fib[101], dp1[101], dp2[101], v[101];
void init()
{
    fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i <= 100; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}

int Sla_Perform(int num)
{
     int cnt = 0;
 
    // Generate the Canonical form
    // of given number
    for (int i = 87; i > 0; i--) {
        if (num >= fib[i]) {
            v[cnt++] = i;
            num -= fib[i];
        }
    }
 
    // Reverse the number
    reverse(v, v + cnt);
 
    // Base condition of dp1 and dp2
    dp1[0] = 1;
    dp2[0] = (v[0] - 1) / 2;
 
    // Iterate from 1 to cnt
    for (int i = 1; i < cnt; i++) {
 
        // Calculate dp1[]
        dp1[i] = dp1[i - 1] + dp2[i - 1];
 
        // Calculate dp2[]
        dp2[i] = ((v[i] - v[i - 1]) / 2)
                     * dp2[i - 1]
                 + ((v[i] - v[i - 1] - 1) / 2)
                       * dp1[i - 1];
    }
 
    // Return final ans
    return (dp1[cnt - 1] + dp2[cnt - 1]);
}
void solve()
{
    init();
    int n; cin >> n;
    cout << Sla_Perform(n) << endl;
    
}

int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; while(tt--) solve();
    // solve();
}