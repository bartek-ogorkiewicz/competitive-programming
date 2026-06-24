// https://cses.fi/problemset/task/1643
// Maximum Subarray Sum
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

    ll prefix = 0;
    ll min_prefix = 0;
    ll answer = INT_MIN;
    for (int i = 0; i < n; i++) {
        prefix += a[i];
        answer = max(answer, prefix - min_prefix);
        min_prefix = min(min_prefix, prefix);
    }
    cout << answer << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
