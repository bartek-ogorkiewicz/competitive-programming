// https://cses.fi/problemset/task/1083/
// Missing Number
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        ll x;
        cin >> x;
        sum += x;
    }
    cout << n * (n + 1) / 2 - sum << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
