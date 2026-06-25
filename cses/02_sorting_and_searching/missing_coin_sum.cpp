// https://cses.fi/problemset/task/2183
// Missing Coin Sum
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
    }

    sort(all(a));

    ll reach = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] <= reach + 1) {
            reach += a[i];
        } else {
            break;
        }
    }
    cout << reach + 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
