// https://cses.fi/problemset/task/3217
// Knight Moves Grid
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

vector<pair<int, int>> directions = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}};

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> distance(n, vector<int>(n, INT_MAX));
    queue<pair<int, int>> points;

    points.push({0, 0});
    distance[0][0] = 0;

    while(!points.empty()) {
        auto [row, col] = points.front();
        points.pop();

        for (pair<int,int> direction : directions) {
            int r2 = row + direction.first;
            int c2 = col + direction.second;
            if (0 <= min(r2, c2) && max(r2, c2) < n && distance[r2][c2] == INT_MAX) {
                distance[r2][c2] = distance[row][col] + 1;
                points.push({r2, c2});
            }
        }
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cout << distance[row][col] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
