// https://codeforces.com/problemset/problem/2241/B
// Good times Good times
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    string s;
    cin >> s;
    cout << "1";
    for (int i = 0; i < s.size() - 1; i++) {
        cout << "0";
    }
    cout << "1";
    cout << "\n";
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
