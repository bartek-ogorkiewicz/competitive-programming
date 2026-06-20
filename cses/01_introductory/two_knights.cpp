// https://cses.fi/problemset/task/1072
// Two Knights
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    for (ll k = 1; k <= n; k++) {
        ll allWays = (k * k) * (k * k - 1) / 2;

        ll badWays = 0;
        badWays += (k - 1) * (k - 2);
        badWays += (k - 2) * (k - 1);
        badWays *= 2;

        cout << allWays - badWays << "\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
