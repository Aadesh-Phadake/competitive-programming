#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int f = 0, s = -1;

        for(int i = 1; i < n; i++){
            if(a[i] != a[f] && s == -1){
                s = i;
            }
        }

        if(s == -1){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for(int i = 0; i < n; i++){
            if(i == f || i == s) continue;

            if(a[i] != a[f])
                cout << f + 1 << " " << i + 1 << endl;
            else
                cout << s + 1 << " " << i + 1 << endl;
        }

        cout << f + 1 << " " << s + 1 << endl;
    }

    return 0;
}