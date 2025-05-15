#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n, x, y, z, ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (ll i = 1; i <= n; i ++) {
        cin >> x >> y >> z;
        ans = ans + x + y + z;
    }
    if (ans == 0) cout << "YES" << '\n';
    else cout << "NO" << '\n'; 
}