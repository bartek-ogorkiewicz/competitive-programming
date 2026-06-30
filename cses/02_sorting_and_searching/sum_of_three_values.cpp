// https://cses.fi/problemset/task/1641
// Sum of Three Values
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        a[i].first = z;
        a[i].second = i + 1;
    }

    sort(all(a));
    vector<int> idx(3, -1);
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1;
        int p = n - 1;
        bool found = false;
        while (l < p) {
            if (((ll)a[l].first + a[p].first  + a[i].first ) > x) {
                p--;
            } else if (((ll)a[l].first  + a[p].first  + a[i].first ) < x) {
                l++;
            } else {
                found = true;
                idx[0] = a[l].second;
                idx[1] = a[p].second;
                idx[2] = a[i].second;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (idx[0] == -1) {
        cout << "IMPOSSIBLE" << "\n";
    } else {
        sort(all(idx));
        for (int i = 0; i < 3; i++) {
            cout << idx[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
