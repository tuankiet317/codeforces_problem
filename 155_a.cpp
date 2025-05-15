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

    ll a[N];
    ll n = 0;
    cin >> n;
    for (ll i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    
    ll minn = a[1], maxx = a[1], ans = 0;
    for (ll i = 1; i <= n; i ++) {
        if (a[i] > maxx) {
            maxx = a[i];
            ans ++;
        }
        if (a[i] < minn) {
            minn = a[i];
            ans ++;
        }
    }
    cout << ans << '\n';
}