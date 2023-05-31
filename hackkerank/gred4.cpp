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
string sort(string s)
{
    sort(s.begin(), s.end());
    return s;
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n), res;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    // for(int i=0; i<n; i++) cout << a[i] << " "; cout << endl;
    for(int i=0; i<n-2; i++)
    {
        if(a[i]>=a[i+1]+a[i+2]) continue;
        else
        {
            res.pb(a[i+2]);
            res.pb(a[i+1]);
            res.pb(a[i]);
            break;
        }
    }
    if(res.size() == 0) cout << -1 << endl;
    for(int i=0; i<res.size(); i++) cout << res[i] << " "; cout << endl;


}

int main()
{
    FAST_IO;
    // int tt;cin >> tt;while (tt--)solve();
    solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}