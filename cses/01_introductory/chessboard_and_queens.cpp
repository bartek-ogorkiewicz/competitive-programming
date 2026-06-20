// https://cses.fi/problemset/task/1624
// Chessboard and Queens
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

ll answer;

void place(int row, vector<string> grid, vector<bool> attacked) {
    if (row == 8) {
        answer++;
        return;
    }

    for (int col = 0; col < 8; col++) {
        if (grid[row][col] == '.' && !attacked[col]) {
            bool diagonal= false;

            for (int r = row - 1, c = col - 1; r >= 0 && c >= 0; r--, c--) {
                if (grid[r][c] == 'q') {
                    diagonal = true;
                    break;
                }
            }
            for (int r = row - 1, c = col + 1; r >= 0 && c < 8 && !diagonal; r--, c++) {
                if (grid[r][c] == 'q') {
                    diagonal = true;
                    break;
                }
            }

            if (!diagonal) {
                grid[row][col] = 'q';
                attacked[col] = true;
                place(row + 1, grid, attacked);
                attacked[col] = false;
                grid[row][col] = '.';
            }
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
    place(0, grid, attacked);
    cout << answer << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
