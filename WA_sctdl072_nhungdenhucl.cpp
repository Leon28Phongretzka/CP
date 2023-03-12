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

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x] = abs(x - k);
    }
    // for(auto i: m) cout << i.first << " " << i.second << endl;
    // sort by second
    vector<pair<int, int>> v;
    for (auto i : m)
        v.pb(i);
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if(a.second == b.second) return a.first < b.first;
        return a.second < b.second; });
    for (auto i : v)
        cout << i.first << " ";
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
