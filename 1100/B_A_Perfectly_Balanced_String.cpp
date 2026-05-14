#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        set<char> st(s.begin(), s.end());

        int k = st.size();

        bool ok = true;

        for (int i = k; i < s.size(); i++)
        {
            if (s[i] != s[i-k])
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
}