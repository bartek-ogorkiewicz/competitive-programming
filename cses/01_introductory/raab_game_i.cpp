// https://cses.fi/problemset/task/3399
// Raab Game I
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> a_cards;
    vector<int> b_cards;
    if ((a + b) == 0 or (a > 0 && b > 0 && a + b <= n)) {
        cout << "YES\n";
        int equals = n - (a + b);
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << "\n";
        int k = 1;
        for (int i = 1; i <= b; i++) {
            cout << (k + a) << " ";
            k++;
        }
        for (int i = 1; i <= a; i++) {
            cout << (k - b) << " ";
            k++;
        }
        for (int i = 1; i <= equals; i++) {
            cout << k << " ";
            k++;
        }
        cout << "\n";
        return;
    }
    cout << "NO\n";

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
