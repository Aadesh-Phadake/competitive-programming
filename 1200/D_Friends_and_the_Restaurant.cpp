#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int>x(n);
        vector<int>y(n);
        for(int i=0;i<n;i++)cin>>x[i];
        for(int i=0;i<n;i++)cin>>y[i];

        vector<int>dif(n);
        for(int i=0;i<n;i++)dif[i]=y[i]-x[i];
        sort(dif.begin(),dif.end());
        int i = lower_bound(dif.begin(), dif.end(), 0) - dif.begin();
        if(i==n){
            cout<<0<<endl;
            continue;
        }
        int l=0,r=n-1;
        int d=0;
        while(l<i && r>=i){
            if(abs(dif[l])<=dif[r]){
                r--;l++;d++;
            }else l++;
        }
        d+=(r-i+1)/2;
        cout<<d<<endl;

    }
}