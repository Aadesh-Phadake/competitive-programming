#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {

    int t;
    cin >> t;

    while (t--) {

        long long n;
        cin >> n;

        __int128 ans = (__int128)(n * (n - 1) / 2) * (4 * n + 1) / 3;

        ans += (__int128)n * n;

        cout << (2022LL * ((long long)(ans % MOD))) % MOD << endl;
    }
}