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

string s;
ll upcase, lowcase;

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    for (ll i = 0; i < s.size(); i ++) {
        if (s[i] >= 'a' && s[i] <= 'z') lowcase ++;
        if (s[i] >= 'A' && s[i] <= 'Z') upcase ++;
    }
    if (lowcase >= upcase) {
        for (ll i = 0; i < s.size(); i ++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += abs('A' - 'a');
        }
        cout << s << '\n';
    }
    else {
        for (ll i = 0; i < s.size(); i ++) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= abs('A' - 'a');
        }
        cout << s << '\n';
    }
}