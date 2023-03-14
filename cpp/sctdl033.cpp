#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define forn(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define fora(i, n) for(auto i:n)
#define Len 100005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
void binaryNum(int n, string s, int slash1, int slash0)
{
	if(s.length()==n)
	{
		cout << (s) << " ";
		return;
	}
	if(slash0 < n/2) binaryNum(n, s+'0', slash1, slash0+1);
	if(slash1 < n/2) binaryNum(n, s+'1', slash1+1, slash0);
}
void solve()
{
	int n; cin >> n;
	if(n&1)
	{
		cout << -2 << endl;
		return;
	} 
	else
	{
		binaryNum(n, "", 0, 0);
		cout << endl;
	}
	
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}

