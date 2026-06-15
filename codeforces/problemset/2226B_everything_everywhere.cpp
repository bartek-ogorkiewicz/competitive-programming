// https://codeforces.com/problemset/problem/2226/B
// Everything Everywhere
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &x : p) cin >> x;

    int cnt = 0;
    for (int i = 0; i + 1 < n; i++) {
        if (abs(p[i] - p[i + 1]) == __gcd(p[i], p[i + 1])) cnt++;
    }
    cout << cnt << "\n";
    return;
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
