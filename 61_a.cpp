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

string a, b;
ll c[N], d[N], e[N];

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;
    for (ll i = 0; i < a.size(); i ++) {
        c[i] = a[i] - 48;
        d[i] = b[i] - 48;
    }
    for (ll i = 0; i < a.size(); i ++) {
        e[i] = (c[i] + d[i]) % 2;
    }
    for (ll i = 0; i < a.size(); i ++) {
        cout << e[i];
    }
}