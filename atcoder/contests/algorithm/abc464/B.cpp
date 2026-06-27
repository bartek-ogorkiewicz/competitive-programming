// https://atcoder.jp/contests/abc464/tasks/abc464_b
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int h, w;
    cin >> h >> w;
    vector<string> g(h);
    for (auto &row : g) cin >> row;

    int top = h, bot = -1, left = w, right = -1;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if(g[i][j] == '#') {
                top   = min(top, i);
                bot   = max(bot, i);
                left  = min(left, j);
                right = max(right, j);
            }
        }
    }
    for (int i = top; i <= bot; i++) {
        cout << g[i].substr(left, right - left + 1) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
