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
        long long s1=0,s2=0;
        int ans=0;
        int r=n;
        for(int l=0;l<r;l++){
            s1+=a[l];
            while(l+1<r && s2<s1){
                r--;s2+=a[r];
            }
            if(s1==s2)ans=max(ans,(l+1)+(n-r));
        }
        cout<<ans<<endl;
    }
}