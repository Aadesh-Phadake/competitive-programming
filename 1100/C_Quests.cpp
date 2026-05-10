#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {    
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++)cin>>b[i];
        int mx=INT_MIN;
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(i+1>k)break;
            sum+=a[i];
            mx=max(mx,b[i]);
            int score=sum+(k-(i+1))*mx;
            ans=max(ans,score);
        }
        cout<<ans<<endl;
        
    }
}