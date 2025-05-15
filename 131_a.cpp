#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

string s;

void open_file() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> s;
    if (s[0] >= 'a') s[0] -= 32;
    for (ll i = 1; i < s.size(); i ++) {
        if (s[i] <= 'Z') s[i] += 32;
    }
    cout << s << '\n';
}