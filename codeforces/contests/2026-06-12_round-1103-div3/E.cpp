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
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        vector<vector<pair<int,int>>> byLen(n + 1);

        vector<char> seen(n + 1, 0);
        for (int l = 0; l < n; l++) {
            int curMin = a[l], curMax = a[l];
            int r;
            for (r = l; r < n; r++) {
                if (seen[a[r]]) break;
                seen[a[r]] = 1;
                curMin = min(curMin, a[r]);
                curMax = max(curMax, a[r]);
                int L = r - l + 1;
                if (curMax - curMin == L - 1)
                    byLen[L].push_back({curMin, l});
            }
            for (int idx = l; idx < r; idx++) seen[a[idx]] = 0;
        }

        vector<int> minP(n + 2), maxP(n + 2);
        int ans = 0;
        for (int L = 1; L <= n / 2; L++) {
            if (byLen[L].empty()) continue;

            fill(minP.begin(), minP.end(), INT_MAX);
            fill(maxP.begin(), maxP.end(), INT_MIN);
            for (auto &pr : byLen[L]) {
                int v = pr.first, pos = pr.second;
                minP[v] = min(minP[v], pos);
                maxP[v] = max(maxP[v], pos);
            }

            for (auto &pr : byLen[L]) {
                int v = pr.first, w = v + L;
                if (v + 2*L - 1 > n) continue;
                if (minP[w] == INT_MAX) continue;
                int gap = max(maxP[w] - minP[v], maxP[v] - minP[w]);
                if (gap >= L) { ans = max(ans, L); break; }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
