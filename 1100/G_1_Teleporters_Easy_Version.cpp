#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        long long c;
        cin >> n >> c;

        vector<long long> cost(n);

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            cost[i] = x + i + 1;
        }

        sort(cost.begin(), cost.end());

        int ans = 0;

        for (int i = 0; i < n; i++) {

            if (c >= cost[i]) {
                c -= cost[i];
                ans++;
            }
            else break;
        }

        cout << ans << endl;
    }
}