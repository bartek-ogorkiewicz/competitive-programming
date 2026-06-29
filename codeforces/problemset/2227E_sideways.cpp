// https://codeforces.com/problemset/problem/2227/E
// It All Went Sideways
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int n;
    cin >> n;
    int maximum = 0;
    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
        if (x > maximum) {
            maximum = x;
        }
    }
    int suf_min = INT_MAX;
    ll sum = 0;
    int maxSameElement = 1;
    int currSameElement = 1;
    for (int i = n - 1; i >= 0; i--) {
        sum += a[i] - min(a[i], suf_min);
        if (suf_min == min(a[i], suf_min)) {
            currSameElement++;
            maxSameElement = max(maxSameElement, currSameElement);
        } else {
            currSameElement = 1;
        }
        suf_min = min(suf_min, a[i]);
    }
    cout << sum + maxSameElement - 1 << "\n";
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
