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

string delSpace(string s)
{
	string res="";
	for(int i=0; i<sz(s); i++)
	{
		if(s[i]!=' ') res+=s[i];
	}
	return res;
}

void verify(int n, string s, int i)
{
	if(i==n)
	{
		for(int j=0; j<sz(s); j++) cout << s[j];
		cout << endl;
	}
	else
	{
		for(int j=0; j<sz(s); j++)
		{
			if(s[j]=='?')
			{
				s[j]='0';
				verify(n,s,i+1);
				s[j]='1';
				verify(n,s,i+1);
			}
		}
	}
}

void solve()
{
    string s; cin >> s;
	int n=0;
	for(int i=0; i<sz(s); i++)
	{
		if(s[i]=='?') n++;
	}
	// s=delSpace(s);
	// cout << n << endl;
	// cout << s << endl;
	verify(n,s,0);
}

int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}

