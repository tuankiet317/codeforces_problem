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

ll dpp[N];
ll n, p, q, a, b;


int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin >> p; for (ll i = 1; i <= p; i ++) cin >> a, dpp[a] ++; 
    cin >> q; for (ll i = 1; i <= q; i ++) cin >> b, dpp[b] ++;
    for (ll i = 1; i <= n; i ++) if (dpp[i] == 0) {cout << "Oh, my keyboard!" << '\n'; return 0;}
    cout << "I become the guy." << '\n';
}