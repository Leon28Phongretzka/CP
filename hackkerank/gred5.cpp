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
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll same = 0;
    map<ll, ll> m;
    ll i=0, j=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]==b[j])
        {
            same++;
            a.erase(a.begin()+i);
            b.erase(b.begin()+j);
        }
        else if(a[i]<b[j]) i++;
        else j++;
    }
    if(a.size()!=0 && b.size() != 0) same++;
    if(a.size()==0 && b.size() == 0) same--;
    cout << same << endl;
}

int main()
{
    FAST_IO;
    // int tt;cin >> tt;while (tt--)solve();
    solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}