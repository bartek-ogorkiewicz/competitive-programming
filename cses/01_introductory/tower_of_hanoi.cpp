//
//
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void hanoi(int n, int a, int b) {
    if (n == 0) {
        return;
    }
    hanoi(n - 1, a, 6 - a - b);
    cout << a << " " << b << "\n";
    hanoi(n - 1, 6 - a - b, b);

}

void solve() {
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << "\n";
    hanoi(n, 1, 3);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
