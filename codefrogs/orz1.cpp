#include<bits/stdc++.h>

using namespace std;

void rec(int i, const vector<string>& a, string str, set<string>& s, int n) {
    if (i == n) return;
    for (int j = i; j < n; j++) {
        string _str = str + a[j];
        s.insert(_str);
        rec(j+1, a, _str, s, n);
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<string> s;
    rec(0, a, "", s, n);
    for(auto i:s)
    {
        cout << i << endl;
    }
}