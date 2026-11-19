#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (k >= n) {
        cout << n <<endl;
        return 0;
    }

    vector<int> save;
    for (int i = 0; i < n - 1; i++) {
        save.push_back(a[i + 1] - a[i] - 1);
    }

    sort(save.rbegin(), save.rend());

    int ans = a[n - 1] - a[0] + 1;

    for (int i = 0; i < k - 1; i++)
        ans -= save[i];

    cout << ans << endl;
}