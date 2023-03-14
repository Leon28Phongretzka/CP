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

void check(string s)
{
    int n = s.size();
    int cnt0 = 0, cnt1 = 0;
    forn(i, 0, n)
    {
        if (s[i] == '0')
            cnt0++;
        else
            cnt1++;
    }
    if (cnt0 == cnt1)
        cout << s << " ";
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b, c;
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    sort(c.rbegin(), c.rend());
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << endl;
    for (int i = 0; i < c.size(); i++)
        cout << c[i] << " ";
    cout << endl;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
        ans[i] = 0;

    if (n & 1)
    {
        for (int i = 0; i < b.size() + c.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = b[i / 2];
            }
            else
            {
                ans[i] = c[i / 2];
            }
        }
        ans[n - 1] = c[c.size() - 1];
    }
    else
    {
        for (int i = 0; i < b.size() + c.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = c[i / 2];
            }
            else
            {
                ans[i] = b[i / 2];
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
        cout << ans[i] << " ";

    cout << endl;
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
