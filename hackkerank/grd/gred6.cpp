#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld; 
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
string sort(string s)
{
    sort(s.begin(), s.end());
    return s;
}
void solve()
{
    int n; cin >> n;
    vector<int> a;
    int slash3 = 0, slash5 = 0;
    // n = 5*slash3 + 3*slash5;
    // 1 = -1
    // 2 = -1
    // 3 = 5*0 + 3*1
    // 4 = -1
    // 5 = 5*1 + 3*0
    // 6 = 5*0 + 3*2
    // 7 = -1
    // 8 = 5*1 + 3*1
    // 9 = 5*0 + 3*3
    // 10 = 5*2 + 3*0
    // 11 = 5*1 + 3*2
    // 12 = 5*0 + 3*4
    // 13 = 5*2 + 3*1
    // 14 = 5*1 + 3*3
    // 15 = 5*0 + 3*5
    // 16 = 5*2 + 3*2
    // 17 = 5*1 + 3*4
    // 18 = 5*0 + 3*6
    // 19 = 5*2 + 3*3
    // 20 = 5*1 + 3*5

    map<ll, ll> m;
    if(n<8)
    {
        if(n==3) m[3]++;
        else if(n==5) m[5]++;
        else if(n==6) m[3]++, m[3]++;
        else m[-1]++;
    }
    for(int i=8; i<=n; i++)
    {
        if(i%3==0)
        {
            m[3]=i/3;
            m[5]=0;
            continue;
        }
        if(i%3==1)
        {
            m[5]=3-i%3;
            m[3]=(i-5*m[5])/3;
        }
        if(i%3==2)
        {
            m[5] = 3-i%3;
            m[3] = (i-5*m[5])/3;
        }
    }
    // for(auto i:m) cout << i.first << " " << i.second << endl;
    string res = "";
    for(int i=0; i<m[3]; i++) res += "555";
    for(int i=0; i<m[5]; i++) res += "33333";
    if(m[-1]!=0) res = "-1";
    cout << res;
    cout << endl;

}

int main()
{
    FAST_IO;
    int tt;cin >> tt;while (tt--)solve();
    // solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}