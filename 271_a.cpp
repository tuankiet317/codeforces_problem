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

ll n;

bool isBeautifulYear(ll n) {
    // cout << "tested" << endl;
    ll prefix[N];
    for (ll i = '0' - 1; i <= '9' + 1; i ++) prefix[i] = 0;
    string s = "";
    s = to_string(n);
    for (ll i = 0; i < s.size(); i ++) prefix[s[i]] ++;
    for (ll i = '0'; i <= '9'; i ++) if (prefix[i] > 1) return false;
    // cout << "accepted" << endl;
    return true;
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (ll i = 1; i <= 1000; i ++) {
        if (isBeautifulYear(n + i) == true) {
            cout << n + i << '\n';
            break;
        }
    }
}