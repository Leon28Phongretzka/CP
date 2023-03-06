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

// find the longest directory substring of given string
void findLongestDir(string s)
{
    int n = s.size();
    int res = 0;
    int cnt = 0;
    forn(i, 0, n)
    {
        // find the smallest element in the string
        int min = s[i];
        int j = i;
        while (j < n && s[j] == min)
        {
            cnt++;
            j++;
        }
        i = j - 1;
    }
    res = max(res, cnt);
    cout << res << endl;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int res = 0;
    findLongestDir(s);
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
