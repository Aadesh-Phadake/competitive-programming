#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(a[i]%k==0)continue;
            else mp[k-a[i]%k]++;
        }
        long long ans=-1;
        for(auto [l,m]:mp){
            if(l==0)continue;
            long long c=l+1ll*(m-1)*k;
            ans=max(ans,c);
        }
       cout<<ans+1<<endl;

    }
}