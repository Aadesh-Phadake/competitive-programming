#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            for (int j = 0; j < n; j++) {
                a[i][j] = s[j] - '0';
            }
        }

        int ops = 0;

        for (int i = 0; i < n / 2; i++) {

            for (int j = i; j < n - i - 1; j++) {

                int x1 = a[i][j];
                int x2 = a[j][n - 1 - i];
                int x3 = a[n - 1 - i][n - 1 - j];
                int x4 = a[n - 1 - j][i];

                int ones = x1 + x2 + x3 + x4;

                ops += min(ones, 4 - ones);
            }
        }

        cout << ops << endl;
    }
}