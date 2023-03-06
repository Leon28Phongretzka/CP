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

string dec2bin(int n)
{
    string res = "";
    while (n > 0)
    {
        res += (n % 2) + '0';
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int bin2dec(string s)
{
    int n = sz(s);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ans += pow(2, n - i - 1);
    }
    return ans;
}

void solve()
{
    int t; cin >> t;
    string s;
    s = dec2bin(t);
    // cout << s << endl;
    int n = sz(s);
    string res = "";
    res += s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i - 1] == '0')
            res += '0';
        else if (s[i] == '1' && s[i - 1] == '1')
            res += '0';
        else
            res += '1';
    }
    cout << bin2dec(res) << endl;
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
