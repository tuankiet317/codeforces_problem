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

ll ps[N];
bool lucky = true;

bool check_lucky(string s) {
    lucky = true;
    for (ll i = 0; i < s.size(); i ++) {
        ps[s[i]]++; 
        if (s[i] != '4' && s[i] != '7') lucky = false;
    }
    if (lucky) return true;
    return false;
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s = "";
    cin >> s;
    for (ll i = 0; i < s.size(); i ++) {
        ps[s[i]] ++;
        // cout << "s." << s[i] << ' ';
        // cout << "ps." << ps[s[i]] << ' ';
    }
    ll res = 0;
    res = ps['4'] + ps['7'];
    // cout << endl;
    // ll res = 0;
    // res = ps['4'] + ps['7'];
    // cout << ps['4'] << ' ' << ps['7'] << endl;
    string sres = to_string(res);
    if (check_lucky(sres)) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}