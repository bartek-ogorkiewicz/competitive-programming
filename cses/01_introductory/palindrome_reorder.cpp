// https://cses.fi/problemset/task/1755
// Palindrome Reorder
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int cnt[26] = {};
    for (char c : s) cnt[c - 'A']++;

    int oddChar = -1;
    int oddCount = 0;
    for (int c = 0; c < 26; c++) {
        if (cnt[c] % 2) {
            oddChar = c + 'A';
            oddCount++;
        }
    }
    if(oddCount > 1){
        cout << "NO SOLUTION\n";
        return;
    }

    string res(n, '?');
    int l = 0, r = n - 1;
    for (int c = 0; c < 26; c++) {
        for (int k = 0; k < cnt[c] / 2; k++) {
            res[l++] = res[r--] = 'A' + c;
        }
    }
    if(oddCount == 1) {
        res[l] = oddChar;
    }
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
