#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n, k, ans, ak;
ll a[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (ll i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    ak = a[k];
    for (ll i = 1; i <= n; i ++) {
        if (a[i] > 0) {
            if (a[i] >= ak) ans ++;
        }
    }
    cout << ans << '\n';
}