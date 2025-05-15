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

set<ll> cubes;

ll t, a3;

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (ll i = 1; i <= 1000000; i ++) {
        cubes.insert(i * i * i);
    }

    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        bool found = false;
        for (ll i = 1; i <= 1000000; i ++) {
            a3 = i * i * i;
            if (a3 >= n) break;
            if (cubes.count(n - a3)) {
                found = true;
                break;
            }
        }
        if (found == true) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}