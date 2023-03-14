#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cerr.tie(0)
typedef long long ll;
typedef long double ld;
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

bool isPos(string s)
{
    map<char, int> frequenciez;
    int max_frequenciez = 0;
    for (int j = 0; j < (s.length()); j++)
    {
        frequenciez[s[j]]++;
        if (frequenciez[s[j]] > max_frequenciez)
            max_frequenciez = frequenciez[s[j]];
    }
    if (max_frequenciez <= (s.length() - max_frequenciez + 1))
        return true;
    return false;
}
void solve()
{
    string s;
    cin >> s;
    ll n = sz(s);
    if (isPos(s))
        cout << 1 << endl;
    else
        cout << -1 << endl;
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
