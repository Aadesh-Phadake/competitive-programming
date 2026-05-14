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
        int ans=-1;
        for(int i=0;i<n;i++){
            if(i!=a[i]){
                if(ans==-1)ans=a[i];
                else ans&=a[i];
            }
        }
        ans==-1?cout<<0<<endl:cout<<ans<<endl;
    }
}