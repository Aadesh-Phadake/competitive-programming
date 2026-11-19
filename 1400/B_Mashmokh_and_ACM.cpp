#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<vector<long long>> dp(k + 1, vector<long long>(n + 1, 0));

    for (int i = 1; i <= n; i++)
        dp[1][i] = 1;

    for (int len = 1; len < k; len++) {
        for (int i = 1; i <= n; i++) {
            if (dp[len][i] == 0) continue;
            for (int j = i; j <= n; j += i) {
                dp[len + 1][j] += dp[len][i];
                dp[len + 1][j] %= MOD;
            }
        }
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans + dp[k][i]) % MOD;
    }

    cout << ans <<endl;
}