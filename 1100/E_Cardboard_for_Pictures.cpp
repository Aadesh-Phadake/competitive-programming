#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, c;
        cin >> n >> c;

        vector<long long> s(n);

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        long long l = 0;
long long r = 1e9;

while (l <= r)
{
    long long w = l + (r - l) / 2;

    __int128 sum = 0;

    for (int i = 0; i < n; i++)
    {
        __int128 x = s[i] + 2LL * w;
        sum += x * x;
    }

    if (sum < c)
    {
        l = w + 1;
    }
    else if (sum > c)
    {
        r = w - 1;
    }
    else
    {
        l = w;
        break;
    }
}

cout << l << endl;
    }
}