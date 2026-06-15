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
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++) { int x; cin >> x; cnt[x]++; }

        bool egorLoses = true;
        int prev = -1;
         for (int v = 1; v <= n; v++) {
            if (cnt[v] == 0) continue;
            if (cnt[v] % 2 == 0) egorLoses = false;
            if (prev != -1 && v - prev <= k) egorLoses = false;
            prev = v;
        }
        cout << (egorLoses ? "NO" : "YES") << "\n";
    }

    return 0;
}
