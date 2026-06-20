// https://cses.fi/problemset/task/1624
// Chessboard and Queens
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

ll answer;

void place(int row, vector<string> grid, vector<bool> attacked, vector<bool> diag_1, vector<bool> diag_2) {
    if (row == 8) {
        answer++;
        return;
    }

    for (int col = 0; col < 8; col++) {
        if (grid[row][col] == '.' && !attacked[col] && !diag_1[row + col] && !diag_2[row - col + 7]) {
                attacked[col] = true;
                diag_1[row + col] = true;
                diag_2[row - col + 7] = true;
                place(row + 1, grid, attacked, diag_1, diag_2);
                diag_2[row - col + 7] = false;
                diag_1[row + col] = false;
                attacked[col] = false;
        }
    }
}

void solve() {
    string s;
    vector<string> grid;
    for (int i = 0; i < 8; i++) {
        cin >> s;
        grid.push_back(s);
    }
    vector<bool> attacked(8);
    vector<bool> diagonal_1(15);
    vector<bool> diagonal_2(15);
    place(0, grid, attacked, diagonal_1, diagonal_2);
    cout << answer << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
