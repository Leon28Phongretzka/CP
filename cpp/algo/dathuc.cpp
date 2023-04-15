#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

struct Node
{
    float arg, exp;
    Node *next;
};

typedef Node* node;

node createNode(float arg,float exp)
{
    node res = new Node;
    res -> arg = arg;
    res -> exp = exp;
    res -> next = NULL;
    return res;
}

void add(node &a, float arg, float exp)
{
    if(a == NULL)
    {
        a = createNode(arg, exp);
        return;
    }
    node tmp = a;
    while(tmp -> next != NULL)
        tmp = tmp -> next;
    tmp -> next = createNode(arg, exp);
}

void init(node &a)
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    while(ss >> s)
    {
        if(s == "+")
            continue;
        float arg, exp, i;
        arg = exp = 0;
        for(i = 0; i < s.sz; ++i)
        {
            if(s[i] == '*')
                break;
            arg = arg * 10 + s[i] - '0';
        }
        i += 3;
        for(; i < s.sz; ++i)
            exp = exp * 10 + s[i] - '0';
        add(a, arg, exp);
    }
}

int Find(node a, int x)
{
    while(a != NULL)
    {
        if(a -> exp == x)
            return a -> arg;
        else if(a -> exp < x)
            return 0;
        a = a -> next;
    }
    return 0;
}

void print(node a)
{
    while(a != NULL)
    {
        if(a -> arg)
            cout << a -> arg << "x^" << a -> exp;
        a = a -> next;
        if(a != NULL and a -> arg)
            cout << " + ";
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        node A, B, C;
        A = B = C = NULL;
        int expMax;
        init(A);
        init(B);
        expMax = max(A -> exp, B -> exp);
        for(int i = expMax;i>=0 ; --i)
            add(C, Find(A, i) + Find(B, i), i);
        print(C);
        cout << endl;
        delete A;
        delete B;
        delete C;
    }
    return 0;
}