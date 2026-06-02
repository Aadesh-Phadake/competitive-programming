#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            for (int p = 2; p * p <= x; p++) {
                while (x % p == 0) {
                    mp[p]++;
                    x /= p;
                }
            }

            if (x > 1) mp[x]++;
        }

        bool ok = true;

        for (auto it : mp) {
            if (it.second % n != 0) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}