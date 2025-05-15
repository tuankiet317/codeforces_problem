#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void open_file() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll T;
ll n, x, k, ssize, ans;
string s;

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while(T --) {
        cin >> n >> x >> k;
        cin >> s;
        ssize = s.size();
        ll i = -1;
        while (k --) {
            i ++;
            if (s[i] == 'L') x ++;
            if (s[i] == 'R') x --;
            if (x == 0) ans ++, i = -1;
        }
        cout << ans << '\n';
    }
}