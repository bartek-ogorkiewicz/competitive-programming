// https://codeforces.com/problemset/problem/2233/A
// AI Project Development
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll n, x, y, z;
    cin >> n >> x >> y >> z;

    ll not_ai;
    ll ai;

    not_ai = (n + (x + y) - 1) / (x + y);
    if (n - z * x > 0) {
        ai = (n - z*x + (x + 10*y) - 1) / (x + 10 * y) + z;
    } else {
        ai = (n + x - 1) / x;
    }

    cout << min(not_ai, ai) << endl;
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
