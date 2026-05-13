#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, l, r;
        cin >> n >> l >> r;

        vector<int> ans;
        bool ok = true;

        for (int i = 1; i <= n; i++) {

            int x = ((l + i - 1) / i) * i;

            if (x > r) {
                ok = false;
                break;
            }

            ans.push_back(x);
        }

        if (!ok) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            for (int x : ans) cout << x << " ";
            cout << '\n';
        }
    }
}