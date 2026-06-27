// https://atcoder.jp/contests/abc464/tasks/abc464_c
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n), B(n), D(n);
    for (int i = 0; i < n; i++) cin >> A[i] >> D[i] >> B[i];

    vector<int> cnt(n + 1, 0);
    int rozne = 0;
    vector<vector<int>> bucket(m + 1);

    for (int i = 0; i < n; i++) {
        int kolorDzien1 = (D[i] == 1) ? B[i] : A[i];
        if (cnt[kolorDzien1] == 0) rozne++;
        cnt[kolorDzien1]++;
        if (D[i] >= 2) bucket[D[i]].push_back(i);
    }
    vector<int> ans(m + 1);
    ans[1] = rozne;

    for (int d = 2; d <= m; d++) {
        for (int i : bucket[d]) {
            if (--cnt[A[i]] == 0) rozne--;
            if (cnt[B[i]]++ == 0) rozne++;
        }
        ans[d] = rozne;
    }
    for (int d = 1; d <= m; d++) cout << ans[d] << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
