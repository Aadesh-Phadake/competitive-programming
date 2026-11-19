#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(n);
        a[0]=1;
        for(int i=1;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ans=0;int c=-1;
        for(int i=0;i<n;i++){
            int idx=upper_bound(b.begin()+c+1,b.end(),a[i])-b.begin();
            if(idx<n){
                c=idx;
            }else{
                ans=n-i;
                break;
            }
        }
        cout<<ans<<endl;

    }
    
}