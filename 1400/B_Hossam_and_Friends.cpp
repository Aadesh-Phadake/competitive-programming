#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> mx(n + 1, 0);

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        if(a > b) swap(a, b);

        mx[b] = max(mx[b], a);
    }

    long long ans = 0;
    int L = 1;

    for(int r = 1; r <= n; r++) {
        L = max(L, mx[r] + 1);
        ans += r - L + 1;
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) solve();
}