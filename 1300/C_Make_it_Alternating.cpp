#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        int cnt = 0;
        int cnt1 = 1;
        long long ans = 1;

        for(int i = 1; i < n; i++) {
            if(s[i] == s[i - 1]) {
                cnt++;
                cnt1++;
            } else {
                ans = (ans * cnt1) % MOD;
                cnt1 = 1;
            }
        }

        ans = (ans * cnt1) % MOD;

        for(int i = 1; i <= cnt; i++) {
            ans = (ans * i) % MOD;
        }

        cout << cnt << " " << ans << endl;
    }

    return 0;
}