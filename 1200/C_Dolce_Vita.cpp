#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        if(n==1){
            cout<<max(0,x-a[0]+1)<<endl;continue;
        }
        sort(a.begin(),a.end());
        vector<long long>p(n);
        p[0]=a[0];
        for(int i=1;i<n;i++)p[i]=p[i-1]+a[i];
        long long pa=0;
       for(int i=0;i<n;i++){
            if(p[i]<=x){
                pa += (x-p[i])/(i+1)+1;
            }
        }
        cout<<pa<<endl;
        }
}