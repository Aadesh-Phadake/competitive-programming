#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<vector<int>> v(n + 1);
        for (int i = 0; i < n; i++) v[a[i]].push_back(b[i]);

        vector<long long> ans(n + 1, 0);

        for (int j = 1; j <= n; j++) {
            if (v[j].empty()) continue;
            sort(v[j].begin(), v[j].end(), greater<int>());
            int s = v[j].size();

            vector<long long> pre(s);
            pre[0] = v[j][0];
            for (int k = 1; k < s; k++) pre[k] = pre[k - 1] + v[j][k];

            
            for (int i = 1; i <= s; i++) {
                int c = s % i;
                ans[i] += pre[s - c - 1];
            }
        }

        for (int i = 1; i <= n; i++) cout << ans[i] << " ";
        cout << endl;
    }
}