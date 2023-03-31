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

int getPriority(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

string preToin(string prefix)
{
    stack<string> s;
    int length = prefix.size();
    for (int i = length - 1; i >= 0; i--)
    {
        if (prefix[i] == '+' || prefix[i] == '-' || prefix[i] == '*' || prefix[i] == '/')
        {
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            string temp = "(" + op1 + prefix[i] + op2 + ")";
            s.push(temp);
        }
        else
        {
            s.push(string(1, prefix[i]));
        }
    }
    return s.top();
}


string inTopost(string infix)
{
    stack<char> s;
    string postfix = "";
    int length = infix.length();

    for(int i=0; i<length; i++)
    {
        char c = infix[i];
        if(c == '(')
        {
            s.push(c);
        }
        else if(c == ')')
        {
            while(!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else if(c == '+' || c == '-' || c == '*' || c == '/')
        {
            while(!s.empty() && getPriority(c) <= getPriority(s.top()))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
        else
        {
            postfix += c;
        }
    }
    while(!s.empty())
    {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

string postToin(string postfix)
{
    stack<string> s;
    int length = postfix.size();
    for (int i = 0; i < length; i++)
    {
        if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/')
        {
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            string temp = "(" + op1 + postfix[i] + op2 + ")";
            s.push(temp);
        }
        else
        {
            s.push(string(1, postfix[i]));
        }
    }
    return s.top();
}


void solve()
{
    string s; cin >> s;
    // cin.ignore();
    int n = sz(s);
    string res = preToin(s);
    cout << res << endl;
    // string res2 = inTopost(s);
    // cout << res2 << endl;    
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