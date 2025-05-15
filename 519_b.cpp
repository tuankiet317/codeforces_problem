#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n, a, b, c, sa, sb, sc;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (ll i = 1; i <= n; i ++) {
        cin >> a;
        sa += a;
    }
    for (ll i = 1; i <= n - 1; i ++) {
        cin >> b;
        sb += b;
    }
    for (ll i = 1; i <= n - 2; i ++) {
        cin >> c;
        sc += c;
    }
    cout << abs(sb - sa) << '\n';
    cout << abs(sc - sb) << '\n';
}