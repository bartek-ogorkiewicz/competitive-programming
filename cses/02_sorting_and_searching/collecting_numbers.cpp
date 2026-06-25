// https://cses.fi/problemset/task/2216
// Collecting Numbers
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> values(n);

    for (int i = 0; i < n; i++) {
        cin >> values[i].first;
        values[i].second = i;
    }

    sort(all(values));

    int rounds = 1;
    for (int i = 1; i < n; i++) {
        if (values[i].second < values[i - 1].second) {
            rounds++;
        }
    }
    cout << rounds << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
