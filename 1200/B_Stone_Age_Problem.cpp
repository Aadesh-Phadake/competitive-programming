#include <bits/stdc++.h>
using namespace std;

int main() {
    
          int n,q;
          cin>>n>>q;
          vector<int>a(n);
          long long sum=0;
          for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
          }
          int all=-1;
          unordered_map<int,int>mp;
          for(int i=0;i<q;i++){
            int t;
            cin>>t;
            if(t==1){
                int j,x;
                cin>>j>>x;
                if(all==-1){j--;
                sum-=a[j];
                a[j]=x;
                sum+=x;}else{
                    if(mp.find(j)==mp.end()){
                        mp[j]=x;
                        sum-=all;
                        sum+=x;
                    }else{
                        sum-=mp[j];
                        mp[j]=x;
                        sum+=x;
                    }
                }
            }else{
                int x;
                cin>>x;
                sum=1LL*n*x;
                all=x;
                mp.clear();
            }
            cout<<sum<<endl;
          }
          
}