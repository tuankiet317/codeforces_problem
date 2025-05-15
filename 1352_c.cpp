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

ll l, r, t, n, k, mid, pos;

void cnp() {
    while (l <= r) {
        mid = (l + r) / 2;
        if (mid - mid / n >= k) r = mid - 1, pos = mid; 
        else l = mid + 1;
    }
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t --) {
        cin >> n >> k;
        l = 1;
        r = 1e18;
        pos = -1;
        mid = 0;
        cnp();
        cout << pos << '\n';
    }
}