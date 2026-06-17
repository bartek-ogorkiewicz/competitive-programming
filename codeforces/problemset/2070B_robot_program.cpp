// https://codeforces.com/problemset/problem/2070/B
// Robot Program
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll n, x, k;
    string s;
    cin >> n >> x >> k;
    cin >> s;
    ll first = 0;
    ll pos = x;
    bool hitZero = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            pos++;
        } else {
            pos--;
        }
        if (pos == 0) {
            first = i + 1;
            hitZero = true;
            break;
        }
    }
    if (!hitZero || first > k) {
        cout << 0 << "\n";
        return;
    }
    ll cycle = 0;
    bool cycleExists = false;
    int p = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            p++;
        } else {
            p--;
        }
        if (p == 0) {
            cycle = i + 1;
            cycleExists = true;
            break;
        }
    }
    ll ans;
    if (!cycleExists) {
        ans = 1;
    } else {
        ans = 1 + (k - first) / cycle;
    }
    cout << ans << "\n";

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
