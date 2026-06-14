#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<bool>b(n,false);
        vector<int>v;
        for(int i=0;i<n;i++){
            if(a[i]<i+1){
                v.push_back(a[i]);
                b[i]=true;
            }
        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            if(b[i]==true){
                int ind=upper_bound(v.begin(),v.end(),i+1)-v.begin();
                ans+=v.size()-ind;
            }
        }
        cout<<ans<<endl;
    }
}