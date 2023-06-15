#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld; 
typedef vector<ll> vl;
typedef vector<vl> vvl;
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
const int N = 5;
ll n;
int sol[N][N];
int v[N][N];
// A utility function to print solution matrix sol[N][N] 
void printSolution(int sol[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout<<sol[i][j]<<" ";
        cout<<endl;
    }
}
  
// A utility function to check if x, y is valid index for
// N*N maze
bool isSafe(int maze[N][N], int x, int y)
{
    // if (x, y outside maze) return false
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;
    return false;
}

bool solveMazeUtil(int v[N][N], int x, int y, int sol[N][N])
{
    if(x==N-1&& y==N-1 && v[x][y]==1)
    {
        sol[x][y] = 1;
        return true;
    }
    if(isSafe(v, x, y)==true)
    {
        if(sol[x][y]==1) return false;
        sol[x][y] = 1;
        if(solveMazeUtil(v, x+1, y, sol)==true) return true;
        if(solveMazeUtil(v, x, y+1, sol)==true) return true;
        if(solveMazeUtil(v, x-1, y, sol)==true) return true;
        if(solveMazeUtil(v, x, y-1, sol)==true) return true;
        sol[x][y] = 0;
        return false;
    }
    return false;
}

bool solution(int v[N][N])
{
    if(solveMazeUtil(v, 0, 0, sol)==false)
    {
        cout << -1 << endl;
        return false;
    }
    printSolution(sol);
    return true;
}

void solve()
{
    cin >> n;
    memset(sol, 0, sizeof(sol));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            ll x; cin >> x;
            v[i][j] = x;
        }
    } 
    solution(v);
}

int main()
{
    FAST_IO;
    // int tt;cin >> tt;while (tt--)solve();
    solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}