// https://codeforces.com/contest/2240/problem/D
// Decidophobia
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    vector<long long> pref(3 * n + 1, 0);
    for (int i = 0; i < 3 * n; i++) {
        pref[i + 1] = pref[i] + a[i % n];
    }

    ll total = 0;
    for (int k = 0; k < n; k++) {
        int L = (int)(k - d + n);
        int R = L + (int)(2 * d + 1);
        long long P = pref[R] - pref[L];

        long long c = (2 * d + 1) * a[k] - P;
        total += max(0LL, c);
    }
    cout << total << "\n";


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
