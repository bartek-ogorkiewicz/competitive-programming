// https://atcoder.jp/contests/abc464/tasks/abc464_e
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int H, W, Q;
    cin >> H >> W >> Q;

    vector<int> R(Q), C(Q);
    vector<char> X(Q);
    for (int i = 0; i < Q; i++) cin >> R[i] >> C[i] >> X[i];

    vector<char> grid(H * W, 'A');

    vector<int> wype(H, 0);

    for (int q = Q - 1; q >= 0; q--) {
        int r = R[q];
        int c = C[q];
        char ch = X[q];
        for (int i = r - 1; i >= 0; i--) {
            if (wype[i] >= c) break;
            for (int j = wype[i]; j < c; j++) {
                grid[i * W + j] = ch;
            }
            wype[i] = c;
        }
    }

    string out;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            out += grid[i * W + j];
        }
        out += '\n';
    }
    cout << out;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
