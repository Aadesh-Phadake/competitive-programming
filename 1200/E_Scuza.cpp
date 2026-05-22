#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, m;
        cin >> n >> m;

        vector<long long> a(n), q(m);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < m; i++)
            cin >> q[i];

        vector<long long> pref(n), mx(n);

        pref[0] = a[0];
        mx[0] = a[0];

        for(int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + a[i];
            mx[i] = max(mx[i - 1], a[i]);
        }

        for(int i = 0; i < m; i++) {

            int idx = upper_bound(mx.begin(), mx.end(), q[i]) - mx.begin();

            if(idx == 0)
                cout << 0 << " ";
            else
                cout << pref[idx - 1] << " ";
        }

        cout << endl;
    }
}