// https://codeforces.com/problemset/problem/2238/D
// Storming Arasaka
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
using ll = long long;

void YES() { cout << "YES" << "\n"; }
void NO()  { cout << "NO" << "\n"; }
void answer(bool b) { b ? YES() : NO(); }

const int MAX = 1e6 + 1;
int spf[MAX];

void solve() {
    int n;
    cin >> n;
    int totalPrimes = 0;
    int distinctPrimes = 0;
    while (n > 1) {
        int p = spf[n];
        distinctPrimes++;
        while (n % p == 0) {
            n /= p;
            totalPrimes++;
        }
    }
    cout << totalPrimes + distinctPrimes - 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=2;i<MAX;i++) if(!spf[i])
        for(int j=i;j<MAX;j+=i) if(!spf[j]) spf[j]=i;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
