#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    const long long mod = 1e9 + 7;

    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(b.begin(), b.end(), greater<int>());
        sort(a.begin(),a.end());
        long long ans = 1;

        for (int i = 0; i < n; i++) {

            int num = a.end() - upper_bound(a.begin(), a.end(), b[i]);

            if (num - i <= 0) {
                ans = 0;
                break;
            }

            ans = (ans * (num - i)) % mod;
        }

        cout << ans << '\n';
    }
}