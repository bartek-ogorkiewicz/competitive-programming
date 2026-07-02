// https://cses.fi/problemset/task/1163
// Traffic Lights
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll x, n;
    cin >> x >> n;
    vector<ll> a(n);
    for (auto &z : a) {
        cin >> z;
    }
    set<ll> lights = {0, x};
    multiset<ll> gaps = {x};

    for (int i = 0; i < n; i++) {
        ll p = a[i];
        auto hi = lights.upper_bound(p);
        auto lo = prev(hi);
        ll L = *lo;
        ll R = *hi;

        gaps.erase(gaps.find(R - L));
        gaps.insert(p - L);
        gaps.insert(R - p);
        lights.insert(p);

        cout << *gaps.rbegin() << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
