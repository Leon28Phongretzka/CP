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


void solve()
{
    ll ptr2, ptr1;
    ll n; cin >> n;
    ll res = 0;
    string sol = "";
    vector<int> a(n);
    bool ok = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i==0)
        {  
            ptr2 = a[0];
            ptr1 = a[0];
            sol = sol + "1";
        }
        else if(!ok && (a[i]>=ptr1 && a[i]>=ptr2))
        {
            ptr2 = a[i];
            sol = sol + "1";
        }
        else if(!ok && a[i]<ptr2 && a[i]<=ptr1)
        {
            ok = 1;
            ptr2 = a[i];
            sol = sol + "1";
        }
        else if(ok && a[i]>=ptr2 && a[i]<=ptr1)
        {
            ptr2 = a[i];
            sol = sol + "1";
        }
        else
        {
            sol+="0";
        }        
    }
    cout << sol << endl;

}

int main()
{
    FAST_IO;
    int tt;cin >> tt;while (tt--)solve();
    // solve();
    // ptr1eopen("input.txt", "r", stdin); ptr1eopen("output.txt", "w", stdout);
}