#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>bits(31,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            for(int j=30;j>=0;j--){
            if(((a[i] >> j) & 1)==0)bits[j]++;
        }
        }
        long long ans=0;
        for(int i=30;i>=0;i--){
            if(bits[i]==0)ans += (1LL << i);
            else if(bits[i]<=k){
                k-=bits[i];
                ans += (1LL << i);
            }
        }
        cout<<ans<<endl;

    }
}