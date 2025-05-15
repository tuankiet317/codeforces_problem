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


int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, n;
    cin >> n;
    for (ll i = 1; i <= n; i ++) {
        cin >> a >> b;
        if (a % b == 0) cout << 0 << '\n';
        else cout << b - (a % b) << '\n';
    }
}