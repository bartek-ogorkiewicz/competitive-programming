// https://cses.fi/problemset/task/1625
// Grid Path Description
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

const int MAXN = 100;
int n = 7;
int total;
string s;
bool visited[MAXN][MAXN];
int cnt = 0;

bool blocked(int r, int c) {
    return r < 0 || c < 0 || r >= n || c >= n || visited[r][c];
}

void dfs(int r, int c, int i) {
    if (blocked(r, c)) return;

    if (r == n - 1 && c == 0) {
        if (i == total) cnt++;
        return;
    }
    if (i == total) return;

    bool up = blocked(r - 1, c), down = blocked(r + 1, c);
    bool left = blocked(r, c - 1), right = blocked(r, c + 1);
    if (up && down && !left && !right) return;
    if (left && right && !up && !down) return;


    visited[r][c] = true;

    if (s[i] == 'U' || s[i] == '?') { if (!blocked(r - 1, c)) dfs(r - 1, c, i + 1); }
    if (s[i] == 'D' || s[i] == '?') { if (!blocked(r + 1, c)) dfs(r + 1, c, i + 1); }
    if (s[i] == 'R' || s[i] == '?') { if (!blocked(r, c + 1)) dfs(r, c + 1, i + 1); }
    if (s[i] == 'L' || s[i] == '?') { if (!blocked(r, c - 1)) dfs(r, c - 1, i + 1); }

    visited[r][c] = false;
}

void solve() {
    total = n * n - 1;
    cin >> s;
    dfs(0, 0, 0);
    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
