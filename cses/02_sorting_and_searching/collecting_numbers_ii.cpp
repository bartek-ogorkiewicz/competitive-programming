// https://cses.fi/problemset/task/2217
// Collecting Numbers II
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

int contribution(const vector<int>& pos, int n, int k) {
    if (k < 1 || k > n) return 0;
    return pos[k] < pos[k - 1] ? 1 : 0;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> pos(n + 2);
    vector<int> arr(n + 1);
    pos[0] = 0;
    pos[n + 1] = n + 1;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
        pos[x] = i;
    }

    int rounds = 1;
    for (int k = 2; k <= n; k++) {
        if (pos[k] < pos[k - 1]) rounds++;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        int u = arr[a];
        int v = arr[b];
        set<int> cand = {u, u + 1, v, v + 1};
        for (int k : cand) rounds -= contribution(pos, n, k);

        swap(arr[a], arr[b]);
        pos[u] = b;
        pos[v] = a;

        for (int k : cand) rounds += contribution(pos, n, k);

        cout << rounds << "\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
