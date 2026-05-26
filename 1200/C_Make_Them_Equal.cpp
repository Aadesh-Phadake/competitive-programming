#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        bool allsame = true;
        for (int i = 0; i < n; i++) {
            if (s[i] != c) {
                allsame = false;
                break;
            }
        }

        if (allsame) {
            cout << 0 << endl;
            continue;
        }

        bool found = false;

        for (int i = n / 2 + 1; i <= n; i++) {
            if (s[i - 1] == c) {
                cout << 1 << endl;
                cout << i << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
        }
    }

    return 0;
}