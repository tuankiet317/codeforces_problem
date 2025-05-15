#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void open_file() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n;
string s;
ll dpp[N];

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin >> s;

    for (ll i = 0; i < n; i ++) {
        if (s[i] < 'a') s[i] += 32;
        dpp[s[i]] ++;
    }
    if (dpp['p'] >= 1 && dpp['a'] >= 1 && dpp['n'] >= 1 && dpp['g'] >= 1 && dpp['r'] >= 1  && dpp['m'] >= 1) cout << "YES" << '\n';
    else cout << "NO" << '\n';
} 