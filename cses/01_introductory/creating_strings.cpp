// https://cses.fi/problemset/result/17598375/
// Creating Strings
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

bool myNextPerm(string &s) {
    int n = s.size();
    int i = n - 2;
    while (i >= 0 && s[i] >= s[i + 1]) i--;
    if (i < 0) return false;
    int j = n - 1;
    while (s[j] <= s[i]) j--;
    swap(s[i], s[j]);
    reverse(s.begin() + i + 1, s.end());
    return true;
}
void solve() {
    string s;
    cin >> s;
    sort(all(s));

    vector<string> res;
    do {
        res.push_back(s);
    } while (myNextPerm(s));

    cout << res.size() << "\n";
    for (const string &x : res) cout << x << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
