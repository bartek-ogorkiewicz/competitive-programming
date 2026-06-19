// https://cses.fi/problemset/task/2431
// Digit Queries
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll k;
    cin >> k;

    ll l = 1;
    ll count = 9;
    ll start = 1;

    while (k > l * count) {
        k -= l * count;
        l++;
        count *= 10;
        start *=10;
    }

    k--;
    ll num = start + k / l;
    int pos = k % l;

    string s = to_string(num);
    cout << s[pos] << "\n";
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
