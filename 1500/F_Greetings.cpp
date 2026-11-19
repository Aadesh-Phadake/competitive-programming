
#include <bits/stdc++.h>
using namespace std;

long long mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return 0;

    int mid = l + (r - l) / 2;

    long long ans = 0;

    ans += mergeSort(a, l, mid);
    ans += mergeSort(a, mid + 1, r);

    vector<int> temp;
    int i = l, j = mid + 1;

    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i++]);
        }
        else {
            temp.push_back(a[j++]);
            ans += mid - i + 1;
        }
    }

    while (i <= mid) temp.push_back(a[i++]);
    while (j <= r) temp.push_back(a[j++]);

    for (int k = 0; k < temp.size(); k++) {
        a[l + k] = temp[k];
    }

    return ans;
}

void solve() {
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        b[i] = v[i].second;
    }

    cout << mergeSort(b, 0, n - 1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
