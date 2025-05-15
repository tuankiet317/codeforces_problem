#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n, k, sum, ans, minn;
ll h[N];

void open_file() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (ll i = 1; i <= n; i ++) {
        cin >> h[i];
    }
    if (n == k) {
        cout << 1 << '\n';
        return 0;
    }
    minn = 2e18;
    for (ll i = 1; i <= n - k; i ++) {
        sum = 0;
        for (ll j = i; j <= i + k - 1; j ++) {
            sum += h[j];
            // cout << "sum_in: " << sum << endl;
        }
        if (sum < minn) {
            minn = sum;
            ans = i;
            // cout << "sum: " << sum << endl;
            // cout << "min: " << minn << endl;
            // cout << "i: " << i << endl;
        }
        // cout << "min_out: " << minn << endl;
        // cout << "sum_out: " << sum << endl;
        // cout << "i_out: " << i << endl;
    }
    cout << ans << '\n';
}