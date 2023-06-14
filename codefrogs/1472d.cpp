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
    vector<long long> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    sort(a.begin(), a.end(), greater<ll>());
    for(ll i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(a[i]%2==0) ans+=a[i];
        }
        else
        {
            if(a[i]%2==1) ans-=a[i];
        }
    }
    cout << ans << endl;
    if(ans<0) cout << "Bob\n";
    else if(ans>0) cout << "Alice\n";
    else cout << "Tie\n";
}

int main()
{
    FAST_IO;
    int tt;cin >> tt;while (tt--)solve();
    // solve();
    // ptr1eopen("input.txt", "r", stdin); ptr1eopen("output.txt", "w", stdout);
}