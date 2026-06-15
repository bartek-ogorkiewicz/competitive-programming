#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll a, b, x;
        cin >> a >> b >> x;

        vector<pair<ll,ll>> ca, cb;
        ll v = a, d = 0;
        while (true) {
            ca.push_back({v, d});
            if (v == 0) break;
            v /= x;
            d++;
        }
        v = b; d = 0;
        while (true) {
            cb.push_back({v, d});
            if (v == 0) break;
            v /= x;
            d++;
        }

        auto cost = [](vector<pair<ll,ll>>& chain, ll target) {
            ll best = LLONG_MAX;
            for (auto [val, divs] : chain)
                if (val <= target)
                    best = min(best, divs + (target - val));
            return best;
        };

        ll ans = LLONG_MAX;
        for (auto& p : ca) ans = min(ans, cost(ca, p.first) + cost(cb, p.first));
        for (auto& p : cb) ans = min(ans, cost(ca, p.first) + cost(cb, p.first));
        cout << ans << "\n";
    }

    return 0;
}
