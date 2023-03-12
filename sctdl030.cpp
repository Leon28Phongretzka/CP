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

// find maximum number till k equals 0 or string can't be changed

void findMaximumNum(string str, int k, string &max)
{
    if (k == 0) return;
    int n = str.length();
    int maxIndex = 0;
    char maxDigit = str[0];
    for (int i = 1; i < n; i++)
    {
        if (i <= k && str[i] > maxDigit)
        {
            maxDigit = str[i];
            maxIndex = i;
        }
    }
    if (maxDigit != str[0])
    {
        k -= maxIndex;
        swap(str[0], str[maxIndex]);
    }
    string maxStr = str.substr(1);
    findMaximumNum(maxStr, k, max);
    max = str[0] + max;
    

}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string max = s;
    findMaximumNum(s, n, max);
    cout << max << endl;
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