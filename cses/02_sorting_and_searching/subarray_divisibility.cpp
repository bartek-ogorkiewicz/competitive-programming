// https://cses.fi/problemset/task/1662
// Subarray Divisibility
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
    }
    vector<int> mod(n, 0);
    mod[0]++;
    ll pref = 0;
    for (int i = 0; i < n; i++) {
        pref += a[i];
        mod[((pref % n) + n) % n]++;
    }
    ll ans = 0;
    for (int r = 0; r < n; r++) {
        ll c = mod[r];
        ans += c * (c - 1) / 2;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
