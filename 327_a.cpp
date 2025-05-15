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

ll n;
ll a[N];

ll summ(ll a[], ll n) {
    ll b[N];
    ll num_1 = 0; 
    for (ll i = 1; i <= n; i ++) {
        if (a[i] == 1) num_1 ++;
    }
    for (ll i = 1; i <= n; i ++) {
        if (a[i] == 0) b[i] = 1;
        if (a[i] == 1) b[i] = -1;
    }
    ll max_ending_hear = 0;
    ll max_so_far = 0;
    for (ll i = 1; i <= n; i ++) {
        max_ending_hear += b[i];
        if (max_ending_hear <= 0) max_ending_hear = 0;
        else max_so_far = max(max_so_far, max_ending_hear);
    }
    ll ans = num_1 + max_so_far;
    return ans;
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (ll i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    ll n1 = 0;
    ll n0 = 0;
    for (ll i = 1; i <= n; i ++) {
        if (a[i] == 1) n1 ++;
        if (a[i] == 0) n0 ++;
    }
    if (n1 == n) {cout << n - 1 << '\n'; return 0;}
    if (n0 == n) {cout << n << '\n'; return 0;}
    cout << summ(a, n) << '\n';
}