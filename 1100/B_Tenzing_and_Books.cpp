#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        int ans = 0;

        for (int i = 0; i < n; i++) {

            if ( (a[i] | k) == k )
                ans |= a[i];
            else
                break;
        }

        for (int i = 0; i < n; i++) {

            if ( (b[i] | k) == k )
                ans |= b[i];
            else
                break;
        }

        for (int i = 0; i < n; i++) {

            if ( (c[i] | k) == k )
                ans |= c[i];
            else
                break;
        }

        if (ans == k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}