#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) 
    {
        int n,k;
        cin>>n>>k;
        vector<long long >a(n+1);
        a[0]=0;
        for(int i=1;i<n+1;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<long long> pre(n + 1, 0);

        for (int i = 1; i < n+1; i++) {
            pre[i]=pre[i-1]+a[i];
        }
        int l=0;int r=n-k;
        long long ans=0;
        while(k>=0){
            long long p=pre[r]-pre[l];
            ans=max(ans,p);
            k--;
            r++;
            l+=2;
        }
        cout<<ans<<endl;
        
    }
}