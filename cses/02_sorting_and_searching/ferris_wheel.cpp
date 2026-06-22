// https://cses.fi/problemset/task/1090
// Ferris Wheel
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &s : a) {
        cin >> s;
    }
    sort(all(a));

    int i = 0;
    int j = n - 1;
    int gondolas = 0;
    while (i <= j) {
        if (i < j && (a[i] + a[j]) <= x) {
            i++;
            j--;
        }
        else {
            j--;
        }
        gondolas++;
    }

    cout << gondolas << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
