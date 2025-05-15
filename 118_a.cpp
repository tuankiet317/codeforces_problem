#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

string s, f;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    for (ll i = 0; i < s.size(); i ++) {
        if (s[i] != 'U' && s[i] != 'E' && s[i] != 'O' && s[i] != 'A' && s[i] != 'I' && s[i] != 'Y' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o' && s[i] != 'a' && s[i] != 'i' && s[i] != 'y') {
            f += '.';
            if (s[i] < 96) {
                s[i] += 32;
                f += s[i];
            }
            else {
                f += s[i];
            }
        } 
    }
    cout << f << '\n';
}