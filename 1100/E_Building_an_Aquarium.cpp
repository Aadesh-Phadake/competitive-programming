#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {    
        int n;
        long long x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        long long l=1;
        long long r=2e9+1;
        long long ans=0;
        while(l<=r){
            long long h = l + (r - l) / 2;   
            long long sum=0;
            for(int i=0;i<n;i++){
                sum+=max(h-a[i],0LL);
            }
            if(sum==x){
                ans=h;
                break;
            }else if(sum<x){
                l=h+1;
            }
            else {
                r=h-1;
            }
        }
        if(ans==0)ans=r;
        cout<<ans<<endl;

    }
}