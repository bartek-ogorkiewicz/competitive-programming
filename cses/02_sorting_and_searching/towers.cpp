// https://cses.fi/problemset/task/1073
// Towers
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
    
    int towers = 0;
    multiset<int> blocks;
    for (int i = 0; i < n; i++) {
        auto bigger = blocks.upper_bound(a[i]);
        if (bigger == blocks.end()) {
            blocks.insert(a[i]);
            towers++;
        } else {
            blocks.erase(bigger);
            blocks.insert(a[i]);
        }
    }
    cout << towers << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
