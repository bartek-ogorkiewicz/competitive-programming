// https://cses.fi/problemset/task/2168
// Nested Ranges Check
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

struct R { int x, y, idx; };

bool cmp(const R& a, const R& b) {
    if (a.x != b.x) return a.x < b.x;
    return a.y > b.y;
}

void solve() {
    int n;
    cin >> n;
    vector<int> contains(n, 0);
    vector<int> contained(n, 0);
    vector<R> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].x >> v[i].y;
        v[i].idx = i;
    }
    sort(all(v), cmp);

    int ymax = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (v[i].y <= ymax) {
            contained[v[i].idx] = 1;
        }
        ymax = max(ymax, v[i].y);
    }
    int ymin = INT_MAX;
    for (int i = n - 1; i >= 0; i--) {
        if (v[i].y >= ymin) {
            contains[v[i].idx] = 1;
        }
        ymin = min(ymin, v[i].y);
    }
    for (auto &x : contains) {
        cout << x << " ";
    }
    cout << "\n";
    for (auto &x : contained) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
