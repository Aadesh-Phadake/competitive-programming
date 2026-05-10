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
        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int l=0;
        long long sum=a[0];
        long long ans=sum;
        for(int r=1;r<n;r++){
            if((abs(a[r]) % 2) == (abs(a[r-1]) % 2)){
                l=r;
                sum=a[l];
            }else  sum =max(a[r], sum + a[r]);
            ans=max(ans,sum);
        }
        ans=max(ans,sum);
        cout<<ans<<endl;
    }
}