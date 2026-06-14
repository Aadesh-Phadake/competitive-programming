#include <bits/stdc++.h>
using namespace std;

bool check(int k, int h, vector<int> a) {
    vector<int> b;
    for (int i = 0; i < k; i++) {
        b.push_back(a[i]);
    }
    sort(b.rbegin(), b.rend());
    long long required = 0;
    for (int i = 0; i < k; i += 2) {
        required += b[i];
    }
    return required <= h;
}

int main() {
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int low = 1, high = n, ans = 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, h, a)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}