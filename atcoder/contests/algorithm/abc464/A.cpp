// https://atcoder.jp/contests/abc464/tasks/abc464_a
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    string s;
    cin >> s;
    int e = count(all(s), 'E');
    int w = count(all(s), 'W');
    if (e > w) {
        cout << "East" << "\n";
    } else {
        cout << "West" << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
