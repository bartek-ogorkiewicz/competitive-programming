// https://cses.fi/problemset/task/1661
// Subarray Sums II
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &z : a) {
        cin >> z;
    }
    map<ll, ll> cnt;
    cnt[0] = 1;
    ll prefix = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        prefix += a[i];
        ans += cnt[prefix - x];
        cnt[prefix]++;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
