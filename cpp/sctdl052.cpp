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
#define Len 1005
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;
const int fraud = 123456789;
ll power(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll tmp = power(a, b / 2);
    if (b % 2 == 0)
        return (tmp * tmp) % fraud;
    else
        return (((tmp * tmp) % fraud) * a) % fraud;
}

int convertKtoDec(string x, int k)
{
    // convert from base k to base 10
    int res = 0;
    for(int i=sz(x)-1; i>=0; i--)
    {
        res += (x[i]-'0')*power(k,sz(x)-1-i);
    }
    return res;
}
void convertDecToK(int x, int k)
{
    if(x==0) cout << 0 << endl;
    // convert from base 10 to base k
    string res = "";
    while(x>0)
    {
        res += (x%k)+'0';
        x/=k;
    }
    reverse(res.begin(),res.end());
    cout << res << endl;
}

void solve()
{
    ll k; cin >> k;
    string a,b; cin >> a >> b;
    int sum = convertKtoDec(a,k) + convertKtoDec(b,k);
    convertDecToK(sum,k);
    
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
