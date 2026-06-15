#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> par(k, 0);
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                par[i % k] ^= 1;
             }
        }
        bool ok = true;
        for (int x : par) {
            if (x) ok = false;
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
