// https://codeforces.com/problemset/problem/2195/C
// Dice Roll Sequence
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int opposite[7] = {0, 6, 5, 4, 3, 2, 1};
    int ans = 0;
    int i = 0;
    while (i < n-1) {
        if (a[i + 1] == opposite[a[i]] || a[i] == a[i + 1]) {
            ans++;
            i += 2;
        } else {
            i++;
        }
    }

    cout << ans << "\n";
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
