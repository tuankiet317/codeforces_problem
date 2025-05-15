#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef long double ld; 

ll t, n, r, stg;

bool check(ll n) {
  for (ll i = 3; i <= 190; i ++) {
    stg = (i * (i - 1) * (i - 2)) / 6;
    r = (180 * stg) / i; 
    cout << "stg: " << stg << '\n';
    cout << "r: " << r << '\n';
    if (r == n) return true;
    if (r > n) {
      cout << "r: " << r << " n: " << n << '\n';
      return false;
    }
  }
}

int main() {
  cin >> t; 
  for (ll i = 1; i <= t; i ++) {
    cin >> n; 
    if (check(n)) cout << "YES" << '\n';
    if (!check(n)) cout << "NO" << '\n';
  }
}
