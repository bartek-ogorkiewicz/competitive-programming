// https://cses.fi/problemset/task/1619
// Restaurant Customers
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> events;
    events.reserve(2 * n);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, +1});
        events.push_back({b, -1});
    }

    sort(all(events));

    int max_people = 0;
    int current_people = 0;
    for (auto [t, type] : events) {
        current_people += type;
        max_people = max(max_people, current_people);
    }

    cout << max_people << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
