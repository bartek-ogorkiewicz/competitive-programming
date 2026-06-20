// https://cses.fi/problemset/task/1623
// Apple Division
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

int n;
int num[21];
ll answer = LLONG_MAX;

void split(int i, ll a, ll b) {
    if (i == n) {
        answer = min(answer, abs(a - b));
        return;
    }
    split(i + 1, a + num[i], b);
    split(i + 1, a, b + num[i]);
}
void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    split(0, 0, 0);
    cout << answer << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
