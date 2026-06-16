// https://codeforces.com/problemset/problem/2225/C
// Red-Black Pairs
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    string top, bot;
    cin >> n >> top >> bot;
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <=n; i++) {
        int c = i - 1;
        int v = (top[c] != bot[c]) ? 1 : 0;
        dp[i] = dp[i - 1] + v;
        if (i >= 2) {
            int h = (top[c] != top[c - 1]) + (bot[c] != bot[c - 1]);
            dp[i] = min(dp[i], dp[i - 2] + h);
        }
    }
    cout << dp[n] << "\n";
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
