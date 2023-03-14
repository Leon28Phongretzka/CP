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
string nextGreater(string num)
{
    int l = num.size();
    // for (int i=l-1; i>=0; i--)
    // {
    //     if (num.at(i) == '0')
    //     {
    //         num.at(i) = '1';
    //         break;
    //     }
    //     else num.at(i) = '0';
    // if (i < 0)
    //     num = "1" + num;
    // }
    // return num;
}
string sinh_next(string s)
{
    int l = s.size();
    for(int i=l-1; i>=0; i--)
    {
        if(s[i] == '0')
        {
            s[i] = '1';
            break;
        }
        else s[i] = '0';
    }
    // if(s[0] == '0') s = "1" + s;
    return s;
}
void solve()
{
    string s; cin >> s;
    cout << sinh_next(s) << endl;
    
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}

