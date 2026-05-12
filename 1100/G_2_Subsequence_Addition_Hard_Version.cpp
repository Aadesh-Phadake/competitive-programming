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
        
        sort(a.begin(),a.end());
        if(a[0]!=1){
            cout<<"NO"<<endl;continue;
        }
        vector<long long>pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        bool done=true;
        for(int i=1;i<n;i++){
            if(a[i]>pre[i-1]){
                done=false;
                break;
            }
        }
        if(done)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}