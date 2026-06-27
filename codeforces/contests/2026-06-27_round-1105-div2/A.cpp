// https://codeforces.com/contest/2240/problem/A
// Another Popcount Problem
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int n, k;
    cin >> n >> k;

    long long ans = 0;
    long long pow2 = 1;
    while (true) {
        if (k * pow2 <= n) {
            n -= k * pow2;
            ans += k;
            pow2 *= 2;
        } else {
            ans += n / pow2;
            break;
        }
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
