#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n, a, b;
vector <pair <ll, ll> > laptops;

void open_file() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
}

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (ll i = 1; i <= n; i ++) {
        cin >> a >> b;
        pair<ll, ll> mkpair;
        mkpair = make_pair(a, b);
        laptops.push_back(mkpair);
    }

    sort(laptops.begin(), laptops.end());

    // for (ll i = 0; i < laptops.size(); i ++) {
    //     cout << laptops[i].first << " " << laptops[i].second << '\n';
    // }

    for (ll i = 1; i < laptops.size(); i ++) {
        if (laptops[i - 1].first < laptops[i].first) {
            if (laptops[i - 1].second > laptops[i].second) cout << "Happy Alex" << '\n';
            else cout << "Poor Alex" << '\n';
        }
    }
}