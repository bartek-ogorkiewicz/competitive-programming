// https://cses.fi/problemset/task/1094
// Increasing Array
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int  n;
    int x, y;
    cin >> n >> x;
    ll moves = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> y;
        if (y < x) {
            moves += x - y;
            y = x;
        }
        x = y;
    }
    cout << moves << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
