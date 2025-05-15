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

ll t, n;
ll a[N];

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t --) {
        cin >> n; 
        for (ll i = 1; i <= n; i ++) {
            cin >> a[i];
        }
        ll c_len = 0;
        ll m_len = 0;
        ll c_sum = 0;
        ll m_sum = 0;
        bool check = true;
        if (a[1] > 0) check = true;
        else check = false;
        for (ll i = 1; i <= n; i ++) {
            if (check == true && a[i] < 0) {
                c_len ++;
                c_sum += a[i];
                check = false;
            }
            if (check == false && a[i] > 0) {
                c_len ++;
                c_sum += a[i];
                check = true;
            }
            else {
                if (c_len > m_len) {
                    m_sum = c_sum;
                    m_len = c_len;
                }
                if (c_len == m_len) {
                    m_sum = max(m_sum, c_sum);
                    m_len = c_len;
                }
                c_len = 0;
                c_sum = 0;
            }
        }
        cout << m_len << endl;
        cout << m_sum << endl;
    }
}