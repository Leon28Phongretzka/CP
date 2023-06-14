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

ll fact(ll n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}

void solve()
{
    ll n; cin >> n;
    vector<ll> s;
    ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ll x;
		cin >> x;
		if(x < i){
			ans += lower_bound(s.begin(), s.end(), x) - s.begin();
			s.push_back(i);
		}
	}
	cout << ans << endl;
}

int main()
{
    FAST_IO;
    int tt;cin >> tt;while (tt--)solve();
    // solve();
    // ptr1eopen("input.txt", "r", stdin); ptr1eopen("output.txt", "w", stdout);
}