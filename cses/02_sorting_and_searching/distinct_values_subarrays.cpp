// https://cses.fi/problemset/task/3420
// Distinct Values Subarrays
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

    map<int, int> m;
    int left = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (m.count(a[i]) && m[a[i]] >= left) {
            left = m[a[i]] + 1;
        }
        m[a[i]] = i;
        ans += (i - left + 1);
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}


