// https://cses.fi/problemset/task/1618
// Trailing Zeros
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll fives = 0;
    ll twos = 0;
    for (ll i = 5; i <= n; i = i * 5) {
        fives += n / i;
    }
    for (ll i = 2; i <= n; i = i * 2) {
        twos += n / i;
    }
    cout << min(twos, fives) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
