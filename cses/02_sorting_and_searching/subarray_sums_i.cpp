// https://cses.fi/problemset/task/1660
// Subarray Sums I
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
    set<ll> prefixes = {0};
    ll prefix = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        prefix += a[i];
        if (prefixes.find(prefix - x) != prefixes.end()) {
            cnt++;
        }
        prefixes.insert(prefix);
    }
    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
