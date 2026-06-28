// https://cses.fi/problemset/task/3421
// Distinct Values Subsequences
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

const ll MOD = 1000000007;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    map<int,int> cnt;
    for (int x : a) cnt[x]++;
    ll ans = 1;
    for (auto [v, c] : cnt) {
        ans = ans * (c + 1) % MOD;
    }
    ans--;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
