#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll prefix[N];
string s;
ll n, m, l, r;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    n = s.size();
    for (ll i = 1; i < n; i ++) {
		prefix[i] = prefix[i - 1];
		if (s[i - 1] == s[i]) prefix[i] ++;
    }
	cin >> m;
	while (m --) {
		cin >> l >> r;
		cout << prefix[r - 1] - prefix[l - 1] << '\n';
	}
}