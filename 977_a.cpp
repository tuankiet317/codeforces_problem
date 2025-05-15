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

ll n, k;

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (ll i = 1; i <= k; i ++) {
        if (n % 10 == 0) n /= 10;
        else n -= 1;
    }
    cout << abs(n) << '\n';
}