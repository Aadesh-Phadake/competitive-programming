#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        long long ans=1;
        long long mx=*max_element(a.begin(),a.end());
        for(ans;ans<=mx+1;ans*=2){
            set<long long>s;
            for(int i=0;i<n;i++){
                s.insert(a[i]%ans);
            }
            if(s.size()==2)break;
        }
        cout<<ans<<endl;
    }
}