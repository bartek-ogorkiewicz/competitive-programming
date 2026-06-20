// https://cses.fi/problemset/task/1092
// Two Sets
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum % 2 == 1) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vector<int> a;
    vector<int> b;
    ll half_a = 0;
    ll half_b = 0;
    for (int i = n; i>= 1; i--) {
        if (half_a > half_b) {
            b.push_back(i);
            half_b += i;
        } else {
            a.push_back(i);
            half_a += i;
        }
    }
    cout << a.size() << "\n";
    for (auto &x : a) { cout << x << " "; }

    cout << "\n";

    cout << b.size() << "\n";
    for (auto &x : b) { cout << x << " "; }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
