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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a1(n);
    vector<int> a2(k);
    for (int i = 0; i < n; i++)
        cin >> a1[i];
    for (int i = 0; i < k; i++)
        cin >> a2[i];
    set<int> a3;
    for (int i = 0; i < n; i++)
        a3.insert(a1[i]);
    for (int i = 0; i < k; i++)
        a3.insert(a2[i]);
    // cout << endl;
    set<int> a4;
    set_intersection(a1.begin(), a1.end(), a2.begin(), a2.end(), inserter(a4, a4.begin()));
    for (auto i : a3)
        cout << i << " ";
    cout << endl;
    for (auto i : a4)
        cout << i << " ";
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
