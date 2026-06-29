// https://codeforces.com/problemset/problem/2238/A
// Another Puzzle from Papyrus
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    vector<int> b(n);

    for (auto &x : a) {
        cin >> x;
    }
    for (auto &x : b) {
        cin >> x;
    }

    int ans1 = 0;
    int ans2 = c;
    bool possible1 = true;
    bool possible2 = true;

    for (int i = 0; i < n; i++) {
        if (a[i] >= b[i]) {
            ans1 += (a[i] - b[i]);
        } else {
            possible1 = false;
            ans1 = INT_MAX;
            break;
        }
    }

    sort(all(a));
    sort(all(b));

    for (int i = 0; i < n; i++) {
        if (a[i] >= b[i]) {
            ans2 += (a[i] - b[i]);
        } else {
            possible2 = false;
            ans2 = INT_MAX;
            break;
        }
    }

    if (!possible1 && !possible2) {
        cout << -1 << "\n";
        return;
    } else {
        cout << min(ans1, ans2) << "\n";
        return;
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
