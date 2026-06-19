// https://cses.fi/problemset/task/1617
// Bit Strings
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

const ll MOD = 1e9 + 7;

ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    for (ll i = 0; i < exp; i++) {
        result = result * base % mod;
    }
    return result;
}

void solve() {
    ll n;
    cin >> n;
    cout << power(2, n, MOD) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
