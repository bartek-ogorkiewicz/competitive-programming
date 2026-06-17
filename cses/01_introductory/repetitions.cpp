// https://cses.fi/problemset/task/1069
// Repetitions
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int best = 1;
    int sum = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            sum++;
        } else {
            sum = 1;
        }
        if (sum > best) {
            best = sum;
        }
    }
    cout << best << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
