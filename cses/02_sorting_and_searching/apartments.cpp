// https://cses.fi/problemset/task/1084
// Apartments
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (auto &s : a) {
        cin >> s;
    }

    vector<int> b(m);
    for (auto &s : b) {
        cin >> s;
    }

    sort(all(a));
    sort(all(b));

    int i = 0;
    int j = 0;
    int apartments = 0;
    while (i < n && j < m) {
        if (b[j] < a[i] - k) {
            j++;
        } else if (b[j] > a[i] + k) {
            i++;
        } else {
            apartments++;
            i++;
            j++;
        }
    }
    cout << apartments << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
