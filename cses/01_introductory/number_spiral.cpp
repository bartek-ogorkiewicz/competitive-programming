// https://cses.fi/problemset/task/1071
// Number Spiral
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll x, y;
    cin >> x >> y;
    ll m = max(x, y);
    ll val;
    if (m % 2 == 0) {
        val = (x == m) ? m * m - y + 1 : (m - 1) * (m - 1) + x;
    } else {
        val = (y == m) ? m * m - x + 1 : (m - 1) * (m - 1) + y;
    }
    cout << val << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
