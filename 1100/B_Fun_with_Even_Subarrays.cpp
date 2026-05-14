#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int l=0;
        int ops=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]!=a[n-1]){
                i-=(l-1);
                l*=2;
                ops++;
            }else l++;
        }
        cout<<ops<<endl;
    }
}