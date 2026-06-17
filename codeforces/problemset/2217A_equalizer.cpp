// https://codeforces.com/problemset/problem/2217/A
// The Equalizer
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int sum = 0;
    for (auto &x : a) {
        cin >> x;
        sum += x;
    }
    if (sum % 2 == 1 || n * k % 2 == 0) {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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
