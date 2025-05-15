#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll a, b, c, case1, case2, case3;
ll arr[N];

void open_file() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c;
    ll maxx = 0;
    arr[1] = a + b + c;
    arr[2] = (a + b) * c;
    arr[3] = a * (b + c);
    arr[4] = a * b * c;
    for (ll i = 1; i <= 4; i ++) {
        if (arr[i] >= maxx) maxx = arr[i];
    }
    cout << maxx<< '\n';
}