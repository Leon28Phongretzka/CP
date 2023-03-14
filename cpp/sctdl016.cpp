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
const int MOD = 1e9+7;
typedef vector<vector<ll>> matrix;

matrix multiply(matrix A, matrix B)
{
    int n = A.size();
    matrix C(n, vector<ll>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                C[i][j] = (C[i][j] + (long long)A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}

matrix power(matrix A, int p)
{
    int n = A.size();
    matrix C(n, vector<ll>(n));
    for (int i = 0; i < n; i++)
    {
        C[i][i] = 1;
    }
    while (p)
    {
        if (p & 1)
        {
            C = multiply(C, A);
        }
        A = multiply(A, A);
        p >>= 1;
    }
    return C;
}


void solve()
{
    int n,m; cin >> n >> m;
    matrix a(n, vector<ll>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    matrix b = power(a,m);
    long long sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = (sum + b[i][i]) % MOD;
    }
    cout << sum << endl;
}

int main()
{
    FAST_IO;
    int tt; cin >> tt; while (tt--) solve();
    // solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
