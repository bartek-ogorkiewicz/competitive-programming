// https://cses.fi/problemset/task/1091
// Concert Tickets
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;

    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        tickets.insert(h);
    }

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        auto x = tickets.upper_bound(t);
        if (x == tickets.begin()) {
            cout << -1 << "\n";
            continue;
        }
        x--;
        cout << *x << "\n";
        tickets.erase(x);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
