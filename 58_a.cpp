#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

string s, ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    int active_h = 0;
    int active_e = 0;
    int active_l = 0;
    int active_o = 0;
    for (ll i = 0; i < s.size(); i ++) {
        // clear h
        if (s[i] == 'h') active_h ++;
        if (active_h <= 1 && s[i] == 'h') continue;
        if (active_h > 1 && s[i] == 'h') s[i] = 'z';  
        // clear e
        if (active_h >= 1) {
            if (s[i] == 'e') active_e ++;
            if (active_e <= 1 && s[i] == 'e') continue;
            if (active_e > 1 && s[i] == 'e') s[i] = 'z';  
        }
        // clear l
        if (active_h >= 1 && active_e >= 1) {
            if (s[i] == 'l') active_l ++;
            if (active_l <= 2 && s[i] == 'l') continue;
            if (active_l > 2 && s[i] == 'l') s[i] = 'z';  
        }
        // clear o
        if (active_h >= 1 && active_e >= 1 && active_l >= 2) {
            if (s[i] == 'o') active_o ++;
            if (active_o <= 1 && s[i] == 'o') continue;
            if (active_o > 1 && s[i] == 'o') s[i] = 'z';  
        }
        else s[i] = 'z';
    }
    // cout << "s: " << s << endl;
    for (ll i = 0; i < s.size(); i ++) {
        if (s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o') {
            ans += s[i];
        }
    }
    // cout << "ans: " << ans << endl;
    if (ans == "hello") cout << "YES" << '\n';
    else cout << "NO" << '\n';
}