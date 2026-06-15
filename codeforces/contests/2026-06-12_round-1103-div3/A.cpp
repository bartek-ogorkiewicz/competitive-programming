#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];

        for (int k = 1; ; k++) {
            bool ok = false;
            for (int H = 1; H <= 7; H++) {
                bool good = true;
                for (int i = 0; i < n; i++) {
                    int x = H - h[i];
                    if (x < 1 || x > k) {
                        good = false;
                        break;
                    }
                }
                if (good) {
                    ok = true;
                    break;
                }
            }
            if (ok) {
                cout << k << "\n"; break;
            }
        }
    }
    return 0;
}
