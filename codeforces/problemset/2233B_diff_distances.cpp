// https://codeforces.com/problemset/problem/2233/B
// Different Distances
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void addPair(vector<int>& res, int a, int b) {
    int pattern[8] = {a, b, b, a, b, a, a, b};
    for (int v : pattern) res.push_back(v);
}

void solve() {
    int n;
    cin >> n;
    vector<int> res;

    int start = 1;
    if (n % 2 == 1) {
        int block[12] = {1,1,2,1,2,3,1,3,2,2,3,3};
        for (int v : block) res.push_back(v);
        start = 4;
    }

    for (int a = start; a < n; a += 2) {
        addPair(res, a, a + 1);
    }

    for (int v : res) cout << v << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
