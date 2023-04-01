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
#define Len 1001
#define MaxDP 100006
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;
vector<vector<ll>> dp(Len, vector<ll>(Len));
vector<ll> dp1(MaxDP, 0);

ll maxDepth(string s)
{
    ll depth = 0;
    stack<ll> st;
    st.push(depth);
    for(char c : s)
    {
        if(c == 'l') continue;
        if(c=='n')
        {
            depth++;
            st.push(depth);
        }
        else
        {
            st.pop();
            depth--;
        }
    }
    ll ans = 0;
    while(!st.empty())
    {
        ans = max(ans, st.top());
        st.pop();
    }
    return ans;
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    cout << maxDepth(s) << endl;
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