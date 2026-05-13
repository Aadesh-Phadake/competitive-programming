#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin>>n;
        vector<int>a(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        vector<long long>pre(n,a[0]);
        for(int i=1;i<n;i++)pre[i]=pre[i-1]+a[i];
        long long ans=1;
        for(int i=1;i<n;i++)ans=max(ans,gcd(pre[i-1],sum-pre[i-1]));
        cout<<ans<<endl;
    }
}