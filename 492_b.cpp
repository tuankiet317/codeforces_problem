#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n;
ld l, kc, kcd, kcc;
ld a[N];
vector<ld> daykc;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> l;
    for (ll i = 1; i<= n; i ++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    kcd = a[1] - 0;
    kcc = l - a[n];
    if (n == 1) {
        cout << setprecision(10) << fixed << max(kcd, kcc) << '\n';
        return 0;
    }
    for (ll i = 1; i <= n - 1; i ++) {
        kc = a[i + 1] - a[i];
        daykc.push_back(kc);
    }
    sort(daykc.begin(), daykc.end());
    reverse(daykc.begin(), daykc.end());
    cout << setprecision(10) << fixed << max({kcd, kcc, daykc[0] / 2}) << '\n';
}