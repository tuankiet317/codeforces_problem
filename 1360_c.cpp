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

ll t, n;
ll a[N];

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t --) {
        vector<ll> chan;
        vector<ll> le;
        cin >> n;
        for (ll i = 1; i <= n; i ++) {
            cin >> a[i];
        }
        for (ll i = 1; i <= n; i ++) {
            if (a[i] % 2 == 0) chan.push_back(a[i]);
            if (a[i] % 2 != 0) le.push_back(a[i]);
        }
        if (chan.size() % 2 == 0 && le.size() % 2 == 0) {
            cout << "YES" << '\n';
            // debug
            // cout << "chan and le: " << chan.size() << ' ' << le.size() << endl;
            // end debug
        }
        else {
            sort(a + 1, a + 1 + n);
            ll delta = 0;
            bool cont = false;
            for (ll i = 2; i <= n; i ++) {
                delta = a[i] - a[i - 1];
                // debug
                // cout << "delta: " << delta << endl;
                // end debug
                if (delta == 1) {
                    cont = true;
                    break;
                }
            }
            if (cont == true) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
}