// https://codeforces.com/problemset/problem/2230/B
// Digit String
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int fours = count(all(s), '4');

    vector<int> suf2(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suf2[i] = suf2[i + 1] + (s[i] == '2' ? 1 : 0);
    }

    int pref13 = 0;
    int best = INT_MAX;
    for (int i = 0; i <= n; i++) {
        best = min(best, pref13 + suf2[i]);
        if (i < n && (s[i] == '1' || s[i] == '3')) pref13++;
    }

    cout << fours + best << "\n";
    return;
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
