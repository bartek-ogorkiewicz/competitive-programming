#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long zeroes = 0;
    long long number = 1;
    bool one = false;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            if (one) {
                number *= (zeroes + 1);
            }
            one = true;
            zeroes = 0;
        } else {
            zeroes++;
        }
    }

    cout << (one ? number : 0) << "\n";

    return 0;
}
