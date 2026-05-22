#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<pair<long long,int>> A,B,C;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            A.push_back({x,i});
        }

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            B.push_back({x,i});
        }

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            C.push_back({x,i});
        }

        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());
        sort(C.rbegin(), C.rend());

        long long ans = 0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {

                    int x = A[i].second;
                    int y = B[j].second;
                    int z = C[k].second;

                    if (x != y && y != z && x != z) {
                        ans = max(ans,
                                  A[i].first +
                                  B[j].first +
                                  C[k].first);
                    }
                }
            }
        }

        cout << ans << endl;
    }
}