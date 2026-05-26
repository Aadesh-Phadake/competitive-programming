#include <bits/stdc++.h>
using namespace std;

int solve(string s, char c) {
    int l = 0, r = s.size() - 1;
    int cnt = 0;

    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        } 
        else if (s[l] == c) {
            l++;
            cnt++;
        } 
        else if (s[r] == c) {
            r--;
            cnt++;
        } 
        else {
            return 1e9;
        }
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int l = 0, r = n - 1;
        while (l < r && s[l] == s[r]) {
            l++;
            r--;
        }

        if (l >= r) {
            cout << 0 << endl;
            continue;
        }

        int ans = min(solve(s, s[l]), solve(s, s[r]));

        if (ans == 1e9) cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}