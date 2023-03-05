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

void makeCombiUtil(vector<vector<int>> &ans,
                   vector<int> &tmp, int n, int left, int k)
{
    if (k == 0)
    {
        ans.push_back(tmp);
        return;
    }

    for (int i = left; i <= n; ++i)
    {
        tmp.push_back(i);
        makeCombiUtil(ans, tmp, n, i + 1, k - 1);
        tmp.pop_back();
    }
}

vector<vector<int>> makeCombi(int n, int k)
{
    vector<vector<int>> ans;
    vector<int> tmp;
    makeCombiUtil(ans, tmp, n, 1, k);
    return ans;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> ans = makeCombi(n, k);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j;
        }
        cout << " ";
    }
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
