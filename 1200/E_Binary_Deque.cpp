#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int l = 0, sum = 0, maxi = -1;

        for(int r = 0; r < n; r++) {
            sum += a[r];

            while(sum > s) {
                sum -= a[l];
                l++;
            }

            if(sum == s) {
                maxi = max(maxi, r - l + 1);
            }
        }

        if(maxi == -1) cout << -1 << endl;
        else cout << n - maxi << endl;
    }
}