// https://codeforces.com/contest/2240/problem/B
// AI Finds Nothing Here
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

const ll MOD = 998244353;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

ll power(ll b, ll e, ll mod) {
    b %= mod;
    ll r = 1;
    while (e > 0) {
        if (e & 1) r = r * b % mod;
        b = b * b %mod;
        e >>= 1;
    }
    return r;
}

void solve() {
    ll n, m, r, c;
    cin >> n >> m >> r >> c;

    ll F = n * m - (n - r + 1) * (m - c + 1);
    cout << power(2, F % (MOD - 1), MOD) << "\n";
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
