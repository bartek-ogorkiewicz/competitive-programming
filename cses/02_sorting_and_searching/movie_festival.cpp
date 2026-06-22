// https://cses.fi/problemset/task/1629
// Movie Festival
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        movies[i] = {b, a};
    }
    sort(all(movies));

    int count = 0, lastEnd = 0;
    for (auto &[end, start] : movies) {
        if (start >= lastEnd) {
            count++;
            lastEnd = end;
        }
    }
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
