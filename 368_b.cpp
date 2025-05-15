#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll a[N], prefix[N], query[N];
ll n, m, l, maxx = 0;
set<ll> seen;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (ll i = 1; i <= n; i ++) {
        cin >> a[i];
    }

    for (ll i = n; i >= 1; i --) {
        seen.insert(a[i]);
        query[i] = seen.size();
    }

    // for (ll i = 1; i <= n; i ++) cout << query[i] << endl;
    for (ll i = 1; i <= m; i ++) {
        cin >> l;
        cout << query[l] << '\n';
    }
}