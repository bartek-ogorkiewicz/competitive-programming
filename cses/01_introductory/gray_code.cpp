// https://cses.fi/problemset/task/2205
// Gray Code
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<string> g = {""};
    for (int k = 0; k < n; k++) {
        vector<string> next;
        for (auto &s : g) {
            next.push_back("0" + s);
        }
        reverse(g.begin(), g.end());
        for (auto &s : g) {
            next.push_back("1" + s);
        }
        g = next;
    }
    for (auto &s : g) cout << s << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
