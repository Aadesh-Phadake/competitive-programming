#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#define  ll long long
#define MOD (ll)(1e9+7)
 
 
int main() {
    long long t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<long long>a(n);
       for(int i=0;i<n;i++)cin>>a[i];
       vector<int>b;
       b.push_back(a[0]);
       for(int i=1;i<n;i++){
        if(a[i]!=a[i-1])b.push_back(a[i]);
       }
       int ans=b.size();
       int l=0,r=0;
       for(int i=1;i<b.size();i++){
            if(b[i]>b[i-1])r++;
            else {
                if(l!=r)ans-=r-l-1;
                l=i;
                r++;
            }
       }
       if(l!=r)ans-=r-l-1;
       l=0,r=0;
       for(int i=1;i<b.size();i++){
            if(b[i]<b[i-1])r++;
            else {
                if(l!=r)ans-=r-l-1;
                l=i;
                r++;
            }
       }
       if(l!=r)ans-=r-l-1;
       cout<<ans<<endl;

    }
    return 0;
    
}
 
 