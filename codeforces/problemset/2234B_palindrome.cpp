// https://codeforces.com/problemset/problem/2234/B
// Palindrome, Twelve and Two Terms
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll pal[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11};
    ll n;
    cin >> n;
    ll x = n % 12;
    ll a = pal[x];
    ll b = n - a;
    if (b >= 0) {
        cout << a << " " << b << endl;
    } else {
        cout << -1 << endl;
    }
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
