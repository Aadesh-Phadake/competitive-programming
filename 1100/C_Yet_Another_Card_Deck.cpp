#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    vector<int> b(q);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < q; i++) cin >> b[i];

    vector<int> hash(51, 0);

    for (int i = 0; i < n; i++) {
        if (hash[a[i]] == 0)
            hash[a[i]] = i + 1;
    }

    vector<int> ans;

    for (int i = 0; i < q; i++) {

        ans.push_back(hash[b[i]]);

        int pos = hash[b[i]];

        hash[b[i]] = 1;

        for (int j = 1; j <= 50; j++) {
            if (j != b[i] && hash[j] != 0 && hash[j] < pos) {
                hash[j]++;
            }
        }
    }

    for (int x : ans)
        cout << x << " ";

    cout << endl;
}