// https://codeforces.com/problemset/problem/2204/C
// Spring
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

ll safe_lcm(ll x, ll y, ll cap) {
    ll g = gcd(x, y);
    ll l = x / g;
    if (l > cap / y) return cap + 1;
    l *= y;
    return l;
}

void solve() {
    ll a, b, c, m;
    cin >> a >> b >> c >> m;

    ll ab  = safe_lcm(a, b, m);
    ll ac  = safe_lcm(a, c, m);
    ll bc  = safe_lcm(b, c, m);
    ll abc = safe_lcm(ab, c, m);

    ll wa = 6*(m/a) - 3*(m/ab) - 3*(m/ac) + 2*(m/abc);
    ll wb = 6*(m/b) - 3*(m/ab) - 3*(m/bc) + 2*(m/abc);
    ll wc = 6*(m/c) - 3*(m/ac) - 3*(m/bc) + 2*(m/abc);

    cout << wa << " " << wb << " " << wc << '\n';
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
