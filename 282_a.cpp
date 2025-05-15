#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

string s;
ll t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n = 0;
    cin >> t;
    while (t --) {
        ll sl_p = 0, sl_m = 0, p = 0, m = 0;
        cin >> s;
        for (ll i = 0; i < s.size(); i ++) {
            if (s[i] == '+') sl_p ++;
            if (s[i] == '-') sl_m ++;
        }
        p = sl_p / 2;
        m = sl_m / 2;
        n += p;
        n -= m;
    }
    cout << n << '\n';
}