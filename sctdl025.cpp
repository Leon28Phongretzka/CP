#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cerr.tie(0)
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
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define forr(i, a, b) for (ll i = a; i >= b; i--)
#define fora(i, n) for (auto i : n)
#define Len 100005
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;
string add(string a, string b)
{
    string res = "";
    int n1 = a.size(), n2 = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    for (int i = 0; i < n1 || i < n2; i++)
    {
        int sum = carry + (i < n1 ? a[i] - '0' : 0) + (i < n2 ? b[i] - '0' : 0);
        res.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry)
        res.push_back(carry + '0');
    reverse(res.begin(), res.end());
    return res;
}

void maxi_sub(vector<long long> &v, int n)
{
    long long max =v[0];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum > max)
            max = sum;
        if (sum < 0)
            sum = 0;
    }
    cout << max << endl;
}

void solve()
{
    ll n; cin >> n;
    vector<long long> v;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }
    maxi_sub(v,n);

}
int main()
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    ll tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
    // solve();
}