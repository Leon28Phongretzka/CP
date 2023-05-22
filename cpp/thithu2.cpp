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
    long long n; cin >> n;
    if(n==1)
    {
        cout << 0 << endl;
        return;
    }
    vector<ll> a(n);
    for(long long i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll op1 = a[n-1], op2 = 0;
    ll dif = abs(op1 - op2);
    for(ll )
    cout << op1 << " " << op2 << endl;
    cout << op1*op2 << endl;


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