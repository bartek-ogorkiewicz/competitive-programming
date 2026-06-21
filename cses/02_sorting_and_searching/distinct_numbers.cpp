// https://cses.fi/problemset/task/1621
// Distinct Numbers
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
    }

    sort(all(a));

    int distinct = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            distinct++;
        }
    }
    cout << distinct << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
