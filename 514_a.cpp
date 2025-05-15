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

ll answer;
string s;
vector<int> to_int;

int main() {
    open_file();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    for (ll i = 0; i < s.size(); i++) {
        int n = s[i] - 48;
        to_int.push_back(n);
    }
    if (to_int[0] > 4 && to_int[0] != 9) to_int[0] = 9 - to_int[0];
    answer += to_int[0];
    for (ll i = 1; i < to_int.size(); i++) {
        if (to_int[i] > 4) to_int[i] = 9 - to_int[i];
        answer *= 10;
        answer += to_int[i];
    }
    cout << answer << '\n';
}