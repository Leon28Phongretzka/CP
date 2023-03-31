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

class 2_Stack 
{
    int top;
    int 
    public:
        ll a[Len]; 
        
        bool push1(ll x);
        ll pop1();
        ll peek1();
        bool isEmpty1();
        bool isFull1();
        void change1(int idx, ll element);
        void display1();

        bool push2(ll x);
        ll pop2();
        ll peek2();
        bool isEmpty2();
        bool isFull2();
        void change2(int idx, ll element);
        void display2();
};

  
// Driver program to test above functions
int main()
{
    class 2_Stack s;
    s.push(21);
    s.push(22);
    s.push(24);
    s.push(25);
    s.display(); cout << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    s.display();
}