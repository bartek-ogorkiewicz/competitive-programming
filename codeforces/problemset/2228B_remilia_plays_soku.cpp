// https://codeforces.com/problemset/problem/2228/B
// Remilia Plays Soku
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;
    if (n == 2 || n == 3) {
        cout << 1 << "\n";
        return;
    }
    ll diff = abs(x1 - x2);
    ll d = min(diff, n - diff);
    cout << d + k << "\n";
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
