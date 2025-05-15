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

ll t;

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t; 
    while (t --) {
        ll a[N];
        ll n = 0;
        ll dem = 0;
        cin >> n;
        for (ll i = 1; i <= n; i ++) {
            cin >> a[i];
        }
        for (ll i = 1; i <= n - 1; i ++) {
            for (ll j = i + 1; j <= n; j ++) {
                if (a[j] - a[i] == j - i) {
                    // cout << endl;
                    // cout << j << ' ' << i << endl;
                    // cout << a[j] << ' ' << a[i] << endl;
                    dem ++;
                }
            }
        }
        cout << dem << '\n';
    }
}