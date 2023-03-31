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

class Stack 
{
    int top;
    public:
        ll a[Len]; 
        Stack() { top = -1; }
        bool push(ll x);
        ll pop();
        ll peek();
        ll pos(int idx);
        bool isEmpty();
        bool isFull();
        ll count();
        void change(int idx, ll element);
        void display();
        void displayFirst();
};
  
bool Stack::push(ll x)
{
    if (top >= (Len - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        // cout << x << " pushed into stack\n";
        return true;
    }
}
  
ll Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
ll Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

ll Stack::pos(int idx)
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        ll x = a[idx-1];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

bool Stack::isFull()
{
    return (top >= Len - 1);
}

ll Stack::count()
{
    return top + 1;
}

void Stack::change(int idx, ll element)
{
    if (idx > top)
    {
        cout << "Index out of range";
    }
    else
    {
        a[idx] = element;
    }
}

void Stack::displayFirst()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
    }
    else
    {
        cout << a[0] << endl;
    }
}

void Stack::display()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
    }
    else
    {
        for(int i=0; i<=top; i++)
        {
            cout << a[i] << " ";
        }
    }
}
  
// Driver program to test above functions
int main()
{
    class Stack s;
    s.push(21);
    s.push(22);
    s.push(24);
    s.push(25);
    s.display(); cout << endl;
    cout << s.pos(3) << endl;
    s.displayFirst();
    cout << s.count() << endl;
    s.change(1, 23);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    s.display();
}