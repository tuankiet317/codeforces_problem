#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n;

void open_file() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    if (n == 1) {
        cout << 1 << '\n';
    }
    else {
        if (n % 2 == 0) cout << 1 << '\n';
        else cout << 2 << '\n';
    }
}