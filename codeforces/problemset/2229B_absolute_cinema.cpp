// https://codeforces.com/problemset/problem/2229/B
// Absolute Cinema
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    ll suma_b = 0;
    ll max_a = 0;

    for (int i = 0; i < n; i++) {
        ll bigger = max(a[i], b[i]);
        ll smaller = min(a[i], b[i]);
        suma_b += bigger;
        max_a = max(max_a, smaller);
    }
    cout << suma_b + max_a << "\n";
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
