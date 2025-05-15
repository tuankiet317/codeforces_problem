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

ll a[N];
ll trung = 0; 

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (ll i = 1; i <= 4; i ++) cin >> a[i];
    sort(a + 1, a + 1 + 4);
    for (ll i = 2; i <= 4; i ++) {
        if (a[i] == a[i - 1]) trung ++;
    }
    cout << trung << '\n';
}