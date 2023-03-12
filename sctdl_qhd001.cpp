#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<int> vi;
typedef vector<int>::iterator ip;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef vector<pui> vpui;
typedef vector<ul> vu;
typedef vector<string> vs;
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
long long dp[20][180][2];

void getDigits(long long x, vector<int> &digit)
{
    while (x)
    {
        digit.push_back(x % 10);
        x /= 10;
    }
}

long long digitSum(int idx, int sum, int tight,
                   vector<int> &digit)
{
    if (idx == -1)
        return sum;

    if (dp[idx][sum][tight] != -1 and tight != 1)
        return dp[idx][sum][tight];

    long long ret = 0;

    int k = (tight) ? digit[idx] : 9;

    for (int i = 0; i <= k; i++)
    {
        int newTight = (digit[idx] == i) ? tight : 0;

        ret += digitSum(idx - 1, sum + i, newTight, digit);
    }

    if (!tight)
        dp[idx][sum][tight] = ret;

    return ret;
}

long long rangeDigitSum(long long a, long long b)
{
    // initializing dp with -1
    memset(dp, -1, sizeof(dp));

    vector<int> digitA;
    getDigits(a - 1, digitA);

    long long ans1 = digitSum(digitA.size() - 1, 0, 1, digitA);

    vector<int> digitB;
    getDigits(b, digitB);

    long long ans2 = digitSum(digitB.size() - 1, 0, 1, digitB);

    return (ans2 - ans1);
}

void solve()
{
    long long a, b; cin >> a >> b;
    cout << rangeDigitSum(a, b) << endl;
}
int main()
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    ll tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
    // solve();
}