// https://codeforces.com/problemset/problem/2037/C
// Superultra's Favorite Permutation
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int n;
    cin >> n;
 
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }
    if (n <5) {
        cout << -1 << "\n";
        return;
    }

    for (int i = 2; i <= n; i += 2) {
        if (i == 4) {
            continue;
        }
        cout << i << " ";
    }

    cout << 4 << " " << 5 << " ";

    for (int i = 1; i <= n; i += 2) {
        if (i == 5) {
            continue;
        }
        cout << i << " ";
    }
    cout << "\n";
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
