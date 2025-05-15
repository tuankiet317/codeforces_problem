#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

string s1, s2;
int morethan_s1, morethan_s2;

void lowercase() {
    for (ll i = 0; i < s1.size(); i ++) {
        if (s1[i] < 'a') s1[i] += 32;
    }
    for (ll i = 0; i < s2.size(); i ++) {
        if (s2[i] < 'a') s2[i] += 32;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s1 >> s2;

    lowercase();

    // debug
    // for (ll i = 0; i < s1.size(); i ++) {
    //     cout << s1[i] << ' ';
    // }
    // cout << endl;
    // for (ll i = 0; i < s2.size(); i ++) {
    //     cout << s2[i] << ' ';
    // }
    // cout << endl; 

    if (s1 > s2) cout << 1 << '\n';
    else if (s1 < s2) cout << -1 << '\n';
    else if (s1 == s2) cout << 0 << '\n';
}