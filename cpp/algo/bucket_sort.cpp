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

void bucket(float arr[], int n)
{
    if(n<=0) return;
    vector<float> b[n];
    for (int i = 0; i < n; i++) {
        int bi = n * arr[i]/100;
        int flr = floor(bi);
        b[flr].push_back(arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        sort(b[i].begin(), b[i].end());
    }

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            arr[index++] = b[i][j];
        }
    }
    
    for(int i=0; i<n; i++) cout << arr[i] << " "; cout << endl;

}

void solve()
{
    float a[] = { 11,9,21,8,17,13,19,1,24,12 };  
    int min1 = *min_element(a,a+10);
    int max1 = *max_element(a,a+10);
    cout << min1 << " " << max1 << endl;
    int n = sizeof(a)/sizeof(a[0]); cout << n << endl;
    int range = ( max1- min1 ) / n; // cout << range << endl;
    bucket(a, n);



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