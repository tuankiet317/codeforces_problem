#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ld snh, sl_ld, sl_ll_ld, sg, n, m, a;
ll sl_ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> a;
    snh = n * m;
    sg = a * a;
    sl_ld = snh / sg;
    sl_ll = snh / sg;
    sl_ll_ld = sl_ll;
    if (snh <= sg) cout << 1 << '\n';
    else if (sl_ld > sl_ll_ld) {
        sl_ll ++;
        while (snh % sl_ll != 0) {
            sl_ll ++;
        }
        cout << sl_ll << '\n';
    }
    else if (sl_ld == sl_ll_ld) {
        while (snh % sl_ll != 0) {
            sl_ll ++;
        }
        cout << sl_ll << '\n';
    }
}