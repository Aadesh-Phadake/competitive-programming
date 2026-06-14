#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n,k;
        cin>>n>>k;

    long long best = 1;

for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
        if (i <= k) best = max(best, i);
        if (n / i <= k) best = max(best, n / i);
    }
}

cout << n / best <<endl;;
    }
}