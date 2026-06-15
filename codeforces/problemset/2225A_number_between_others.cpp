// https://codeforces.com/problemset/problem/2225/A
// A Number Between Two Others
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll y, x;
    cin >> x >> y;
    ll k = y / x;
    if (k == 2) cout << "NO\n";
    else cout << "YES\n";
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
