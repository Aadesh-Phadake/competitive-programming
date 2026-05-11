#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<vector<long long>> v(n, vector<long long>(2));

        for (int i = 0; i < n; i++)
        {
            cin >> v[i][0] >>v[i][1];
        }

        long long d =
            abs(v[a - 1][0] - v[b - 1][0]) +
            abs(v[a - 1][1] - v[b - 1][1]);

        long long dist1 = 1e17;
        long long dist2 = 1e17;

        for (int i = 0; i < k; i++)
        {
            dist1 = min(dist1,
                        abs(v[i][0] - v[a - 1][0]) +
                        abs(v[i][1] - v[a - 1][1]));

            dist2 = min(dist2,
                        abs(v[i][0] - v[b - 1][0]) +
                        abs(v[i][1] - v[b - 1][1]));
        }

        cout << min(d, dist1 + dist2) << endl;
    }
}