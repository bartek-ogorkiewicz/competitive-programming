// https://cses.fi/problemset/task/1074
// Stick Lengths
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &x : p) {
        cin >> x;
    }

    sort(all(p));
    vector<ll> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + p[i];
    }

    ll total = prefix[n];
    ll best = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        ll t = p[i];
        ll left = (ll)i * t - prefix[i];
        ll sumAfter = total - prefix[i + 1];
        ll right = sumAfter - (ll)(n - i - 1) * t;

        best = min(best, left + right);
    }
    cout << best << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
