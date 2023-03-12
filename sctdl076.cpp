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
#define Len 100005
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;

ll bin2dec(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res = res * 2 + (s[i] - '0');
    }
    return res;
}

string dec2bin(ll n)
{
    string res = "";
    while (n > 0)
    {
        res = (char)(n % 2 + '0') + res;
        n /= 2;
    }
    return res;
    
}


void solve()
{
    int x,y; cin >> x >> y;
    cin.ignore();
    string s; cin >> s;
    ll k1 = bin2dec(s);
    k1 = (k1+y+1)%(1<<x);
    string res = dec2bin(k1);
    while(res.size() < x){
        res = "0" + res;
    }
    cout << res << endl;

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
