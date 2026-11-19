#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n;
        cin>>n;
        cout<<1ll*2*n-__builtin_popcountll(n)<<endl;

    }
}