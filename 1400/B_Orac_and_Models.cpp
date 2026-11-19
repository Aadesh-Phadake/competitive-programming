#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++)cin>>a[i];
       vector<int> dp(n+1, 1);
       int ans = 1;
       for (int i = 1; i <= n; i++) {
       for (int j = 2*i; j <= n; j += i) {
        if (a[j-1] > a[i-1]) dp[j] = max(dp[j], dp[i] + 1);
        } 
        ans = max(ans, dp[i]);
        }
        cout<<ans<<endl;
        }
}