// https://cses.fi/problemset/task/2162
// Josephus Problem I
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    bool flag = false;
    while(!q.empty()) {
        int man = q.front();
        q.pop();
        if (flag) {
            cout << man << " ";
        } else {
            q.push(man);
        }
        flag = !flag;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
