// https://cses.fi/problemset/task/1640
// Sum of Two Values
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(all(a));
    int i = 0, j = n - 1;

    while (i < j) {
        int val = a[i].first + a[j].first;
        if (val == x) {
            cout << a[i].second << " " << a[j].second << "\n";
            return;
        } else if (val < x) {
            i++;
        } else {
            j--;
        }
    }
    cout << "IMPOSSIBLE\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
