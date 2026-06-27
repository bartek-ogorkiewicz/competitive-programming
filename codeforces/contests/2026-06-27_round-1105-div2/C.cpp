// https://codeforces.com/contest/2240/problem/C
// Nim Game Is XOR Game
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

const ll MOD = 998244353;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll X = 0, S = 0;
    for (auto &x : a) { cin >> x; X ^= x; S += x; }

    ll ans = 0;
    if (X == 0 && S > 0) ans++;
    for (int j = 0; j < n; j++) {
        ll bj = X ^ a[j];
        if (bj < a[j]) {
            if (S - a[j] > 0 || bj > 0) {
                ans++;
            }
        }
    }
    cout << ans % MOD << "\n";
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
