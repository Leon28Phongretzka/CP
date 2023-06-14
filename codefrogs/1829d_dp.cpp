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

vector<long long> dp1(1e7+5, 0);
vector<long long> dp2(1e7+5, 0);

void solve()
{
    ll n,k; cin >> n >> k;
    ll temp = n;
    if(n<k||n%3!=0) 
    {
        cout << "NO\n";
        return;
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(i%3==0)
            {
                dp1[i]=i/3;
                dp2[i]=2*i/3;
            }
            // cout << dp1[i] << " " << dp2[i] << endl;
        }
        while(n>k)
        {
            if(dp1[n]==k)
            {
                cout << "YES" << endl;
                return;
            }
            else if(dp1[n]>k)
            {
                n = n/3;
            }
            else cout << "NO" << endl;
        }
        n = temp;
        while(n>k)
        {
            if(dp2[n]==k)
            {
                cout << "YES" << endl;
                return;
            }
            else if(dp2[n]>k)
            {
                n = 2*n/3;
            }
            else cout << "NO" << endl;
        }
    }
}

int main()
{
    FAST_IO;
    int tt;cin >> tt;while (tt--)solve();
    // solve();
    // ptr1eopen("input.txt", "r", stdin); ptr1eopen("output.txt", "w", stdout);
}