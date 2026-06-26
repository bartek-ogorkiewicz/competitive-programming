// https://codeforces.com/problemset/problem/2188/B
// Seats
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    int i = 0;
    while (i < n) {
        if (s[i] == '1') {
            ans++;
            i++;
            continue;
        }
        int j = i;
        while (j < n && s[j] == '0') j++;
        int len = j - i;
        int walls = (i == 0) + (j == n);
        ans += (len + walls) / 3;
        i = j;
    }
    cout << ans << "\n";
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
