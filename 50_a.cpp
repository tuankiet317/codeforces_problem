#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll N = 1e6 + 10;
const ll M = 1e9 + 10;

ll n, m, sd, sq, ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    
    sd = 2 * 1;

    sq = n * m;

    ans = sq / sd;
    cout << ans << '\n';
}