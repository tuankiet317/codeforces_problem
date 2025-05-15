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

ll n, t;
string a, arr[N];

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> t;
    cin >> a;
    for (ll i = 1; i <= t; i ++) {
        for (ll j = 0; j < a.size(); j ++) {
            if (a[j] == 'B' && a[j + 1] == 'G') {
                swap(a[j], a[j + 1]);
                j ++;
            }
        }
    }
    cout << a << '\n';
}