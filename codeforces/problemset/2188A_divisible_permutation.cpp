// https://codeforces.com/problemset/problem/2188/A
// Divisible Permutation
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    int lo = (n + 1) / 2;
    int hi = (n + 1) / 2;
    if (n % 2 == 1) {
        cout << hi << " ";
        lo--;
        hi++;
    } else {
        hi++;
    }

    while (hi <= n && lo >= 0) {
        cout << lo << " " << hi << " ";
        lo--;
        hi++;
    }
    cout << "\n";
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
