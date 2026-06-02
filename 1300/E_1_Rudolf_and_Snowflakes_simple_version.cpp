#include <bits/stdc++.h>
using namespace std;
using ll = long long;

__int128 gpSum(ll k, int x, ll n) {
    __int128 sum = 1, term = 1;

    for(int i = 1; i <= x; i++) {
        term *= k;
        sum += term;

        if(sum > n) return n + 1;
    }
    return sum;
}

bool exists(ll n) {
    for(int x = 2; x <= 60; x++) {
        ll l = 2, r = n;

        while(l <= r) {
            ll k = l + (r - l) / 2;

            __int128 s = gpSum(k, x, n);

            if(s == n) return true;
            if(s < n) l = k + 1;
            else r = k - 1;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        cout << (exists(n) ? "YES" : "NO") << '\n';
    }
}