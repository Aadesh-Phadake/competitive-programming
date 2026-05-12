#include <bits/stdc++.h>
using namespace std;

bool pal(vector<int>& a) {
    int l = 0, r = a.size() - 1;

    while (l < r) {
        if (a[l] != a[r]) return false;
        l++;
        r--;
    }

    return true;
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (pal(a)) {
            cout << 0 << endl;
            continue;
        }

        int g = 0;

        for (int i = 0; i < n / 2; i++) {
            g = gcd(g, abs(a[i] - a[n - 1 - i]));
        }

        cout << g << endl;
    }
}