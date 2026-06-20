// https://cses.fi/problemset/task/3419
// Mex Grid Construction
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    int a[n][n];
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            set<int> s;
            for (int r = 0; r < row; r++) {
                s.insert(a[r][col]);
            }
            for (int c = 0; c < col; c++) {
                s.insert(a[row][c]);
            }
            int x = 0;
            while (s.count(x)) {
                x++;
            }
            a[row][col] = x;
            cout << a[row][col] << " ";
        }
        cout <<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
