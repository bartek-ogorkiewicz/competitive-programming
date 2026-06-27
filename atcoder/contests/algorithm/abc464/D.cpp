// https://atcoder.jp/contests/abc464/tasks/abc464_d
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<ll> X(n), Y(n - 1);
    for (int i = 0; i < n; i++) cin >> X[i];
    for (int i = 0; i < n - 1; i++) cin >> Y[i];

    ll szczescie_slonce;
    if (s[0] == 'S') {
        szczescie_slonce = 0;
    } else {
        szczescie_slonce = -X[0];
    }

    ll szczescie_deszcz;
    if (s[0] == 'R') {
        szczescie_deszcz = 0;
    } else {
        szczescie_deszcz = -X[0];
    }

    for (int i = 1; i < n; i++) {
        ll koszt_slonce = (s[i] == 'S') ? 0 : X[i];
        ll koszt_deszcz = (s[i] == 'R') ? 0 : X[i];

        ll z_wczoraj_slonce = szczescie_slonce;
        ll z_wczoraj_deszcz = szczescie_deszcz + Y[i - 1];
        ll nowe_slonce = max(z_wczoraj_slonce, z_wczoraj_deszcz) - koszt_slonce;

        ll nowe_deszcz = max(szczescie_slonce, szczescie_deszcz) - koszt_deszcz;

        szczescie_slonce = nowe_slonce;
        szczescie_deszcz = nowe_deszcz;
    }
    cout << max(szczescie_slonce, szczescie_deszcz) << '\n';



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
