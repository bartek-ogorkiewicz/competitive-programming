// https://codeforces.com/problemset/problem/2195/A
// Sieve of Erato67henes
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    bool ok = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 67) ok = true;
    }
    cout << (ok ? "YES" : "NO") << "\n";
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
