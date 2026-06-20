// https://cses.fi/problemset/task/1743/
// String Reorder
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> freq(26);
    for (char c : s) {
        freq[c - 'A']++;
    }

    if (*max_element(freq.begin(), freq.end()) > (n + 1) / 2) {
        cout << -1 << "\n";
        return;
    }

    string answer;
    int prev = -1;
    for (int pos = 0; pos < n; pos++) {
        int rem = n - pos - 1;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0 || i == prev) continue;

            freq[i]--;
            int mx = *max_element(freq.begin(), freq.end());

            if (mx <= (rem + 1) / 2) {
                answer += char('A' + i);
                prev = i;
                break;
            }

            freq[i]++;
        }
    }
    cout << answer << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
