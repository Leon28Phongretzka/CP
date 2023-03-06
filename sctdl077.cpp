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

void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
    vector<int> b(n); for(int i=0; i<n; i++) cin >> b[i];
    int ans = 0;
    // find the next permutation till a = b
    while(a != b){
        // find the first element that is not in the right position
        int i = 0;
        while(a[i] == b[i]) i++;
        // find the next element that is not in the right position
        int j = i+1;
        while(a[j] == b[j]) j++;
        // swap the elements
        swap(a[i], a[j]);
        ans++;
    }
    cout << ans << endl;
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
