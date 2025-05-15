#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n;
ll a[N], s[N];

void open_file() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (ll i = 1; i <= n; i ++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    for (ll i = 1; i <= n; i ++) s[i] = s[i - 1] + a[i];
    for (ll i = 0; i <= n; i ++) {
        cout << s[i] << '\n';
    }
}