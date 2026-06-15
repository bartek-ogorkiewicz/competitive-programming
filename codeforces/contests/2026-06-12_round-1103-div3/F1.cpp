#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

typedef long long ll;
const ll MOD = 1e9 + 7;
const int MAX = 500001;
int spf[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i < MAX; i++)
        if (spf[i] == 0)
            for (int j = i; j < MAX; j += i)
                if (spf[j] == 0) spf[j] = i;


    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        unordered_map<int, ll> S;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            while (a > 1) {
                int q = spf[a], e = 0;
                while (a % q == 0) { a /= q; e++; }
                S[q] += e;
            }
        }
        ll ans = 1;
        for (auto& [q, s] : S)
            ans = ans * ((1 + s) % MOD) % MOD;
        cout << ans << "\n";
    }
    return 0;
}
