// https://cses.fi/problemset/task/1620
// Factory Machines
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll n, t;
    cin >> n >> t;
    vector<int> a(n);
    int fastest = INT_MAX;
    for (auto &x : a) {
        cin >> x;
        fastest = min(fastest, x);
    }
    ll l = 0;
    ll p = fastest * t;
    while (l < p) {
        ll s = (l + p) / 2;
        ll sum = 0;
        for (ll i = 0; i < n; i++) {
            sum += s / a[i];
        }
        if (sum >= t) {
            p = s;
        } else {
            l = s + 1;
        }
    }
    cout << l << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
