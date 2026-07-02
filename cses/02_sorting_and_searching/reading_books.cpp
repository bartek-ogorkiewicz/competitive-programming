// https://cses.fi/problemset/task/1631
// Reading Books
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;

    ll sum = 0;
    ll maxi = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        sum += x;
        maxi = max(maxi, x);
    }
    cout << max(2 * maxi, sum) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
