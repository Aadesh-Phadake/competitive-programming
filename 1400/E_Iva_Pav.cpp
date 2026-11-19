#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--){

        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;i++)
            cin>>a[i];

        vector<vector<int>> pref(31,vector<int>(n+1,0));

        for(int i=1;i<=n;i++){

            for(int b=0;b<31;b++){

                pref[b][i]=pref[b][i-1];

                if(a[i-1]&(1<<b))
                    pref[b][i]++;
            }
        }

        auto getAND=[&](int l,int r){

            int ans=0;

            for(int b=0;b<31;b++){

                int cnt=pref[b][r]-pref[b][l-1];

                if(cnt==r-l+1)
                    ans|=(1<<b);
            }

            return ans;
        };

        int q;
        cin>>q;

        while(q--){

            int l,k;
            cin>>l>>k;

            int lo=l,hi=n,ans=-1;

            while(lo<=hi){

                int mid=(lo+hi)/2;

                if(getAND(l,mid)>=k){

                    ans=mid;
                    lo=mid+1;

                }else{

                    hi=mid-1;
                }
            }

            cout<<ans<<" ";
        }

        cout<<endl;
    }
}