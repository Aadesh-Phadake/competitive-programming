#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> a(n, 0);

        for(int i = 0; i < n; i++) {

            int k = i + 1;

            int curr = k;

            while(curr <= n) {

                if(s[curr - 1] == '1')
                    break;

                if(a[curr - 1] == 0)
                    a[curr - 1] = k;

                curr += k;
            }
        }

        long long ans = 0;

        for(int x : a)
            ans += x;

        cout << ans << endl;
    }
}