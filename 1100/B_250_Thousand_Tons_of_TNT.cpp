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
        vector<long long>a(n+1);
        a[0]=0;
        for(int i=1;i<=n;i++)cin>>a[i];
        vector<long long>pre(n+1);
        pre[0]=a[0];
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        long long ans=0;
        for(int k=1;k<=n/2;k++){
            if (n % k != 0)continue;
            long long mx=LLONG_MIN;
            long long mn=LLONG_MAX;
            for(int i=k;i<=n;i+=k){
                mx=max(mx,pre[i]-pre[i-k]);
                mn=min(mn,pre[i]-pre[i-k]);
            }
            ans=max(ans,mx-mn);
        }
        cout<<ans<<endl;
    }
}