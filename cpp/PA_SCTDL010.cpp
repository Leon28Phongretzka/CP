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
	int n; cin >> n;
	if (n & 1)
	{
		cout << -1 << endl;
		return;
	}
	else
	{
		string s = "";
		for(int i=0; i<n/2; i++) s += '0';
		for(int i=0; i<n/2; i++) s += '1';
		do
		{
			check(s);
		} while (next_permutation(s.begin(), s.end()));
		cout << endl;
	
	}
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
