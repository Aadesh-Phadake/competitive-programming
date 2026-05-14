#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        set<long long> st;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }

        bool ok = false;

        for (int i = 0; i < n; i++)
        {
            if (st.count(a[i] + k))
            {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
}