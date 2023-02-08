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

void print(vector<int> p, int n)
{
    cout << "(";
    for(int i=0;i<n;i++)
    {
        cout << p[i];
    }
    cout << ")";
    // cout << endl;
}

void UniqueParts(int n)
{
    vector<int> p(n);
    int k=0;
    p[k]=n;

    while(1)
    {
        print(p,k+1);

        int rem_val=0;
        while(k>=0 && p[k]==1)
        {
            rem_val+=p[k];
            k--;
        }

        if(k<0) return;

        p[k]--;
        rem_val++;

        while(rem_val>p[k])
        {
            p[k+1]=p[k];
            rem_val=rem_val-p[k];
            k++;
        }

        p[k+1]=rem_val;
        k++;
    }
}

void solve()
{
    int n; cin >> n;
    UniqueParts(n);
    cout << endl;
    
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}

