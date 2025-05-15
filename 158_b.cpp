#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n, taxi, sl4, sl3, sl2, sl1, c;
ll a[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (ll i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    
    // tracking
    for (ll i = 1; i <= n; i ++) {
        if (a[i] == 1) sl1 ++;
        if (a[i] == 2) sl2 ++;
        if (a[i] == 3) sl3 ++;
        if (a[i] == 4) sl4 ++;
    }

    // 4;
    taxi = sl4;
    // 3;
    if (sl1 >= sl3) {
        taxi += sl3;
        sl1 -= sl3;
    }
    else {
        taxi += sl3;
        sl1 = 0;
    }
    // cout << taxi << endl;
    // 2;
    taxi += sl2 / 2;
    sl2 %= 2;
    if (sl2 > 0) {
        if (sl1 >= 2) {
            taxi ++;
            sl1 -= 2;
        }
        else {
            taxi ++;
            sl1 = 0;
        }
    }
    // 1;
    taxi += ceill((long double)sl1 / 4);
    cout << taxi << '\n';
}