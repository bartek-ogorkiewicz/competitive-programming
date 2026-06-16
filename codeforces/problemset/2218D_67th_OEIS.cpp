// https://codeforces.com/problemset/problem/2218/D
// The 67th OEIS Problem
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;

    const int LIMIT = 200000;
    vector<bool> is_comp(LIMIT + 1, false);
    vector<ll> primes;
    for (int i = 2; i <= LIMIT; i++) {
        if (!is_comp[i]) {
            primes.push_back(i);
            for (ll j = (ll)i * i; j <= LIMIT; j += i) is_comp[j] = true;
        }
    }

    if (n == 2) {
        cout << primes[2] << " " << primes[0] << "\n";
        return;
    }

    cout << primes[0];
    for (int i = 2; i <= n - 1; i++) {
        cout << ' ' << primes[i - 2] * primes[i - 1];
    }
    cout << " " << primes[n - 2] << "\n";
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
