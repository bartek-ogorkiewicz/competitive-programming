// https://cses.fi/problemset/task/3311
// Grid Coloring I
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> grid;
    string s;
    for (int i = 0; i < n; i ++) {
        cin >> s;
        grid.push_back(s);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                if (grid[i][j] == 'A') {
                    grid[i][j] = 'B';
                } else {
                    grid[i][j] = 'A';
                }
            } else {
                if (grid[i][j] == 'C') {
                    grid[i][j] = 'D';
                } else {
                    grid[i][j] = 'C';
                }
            }
        }
        cout << grid[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
