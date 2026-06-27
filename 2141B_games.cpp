// https://codeforces.com/problemset/problem/2141/B
// Games
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;

    int c = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] == b[j]) {
            i++;
            j++;
            c++;
        } else {
            j++;
        }
    }

    int A = n - c;
    int B = m - c;

    if (A <= B) {
        cout << 2 * A + 1 << "\n";
    } else {
        cout << 2 * B + 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
