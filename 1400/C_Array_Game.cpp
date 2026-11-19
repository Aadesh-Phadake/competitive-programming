#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k>2){
            cout<<0<<endl;
            continue;
        }else if(k==1){
             sort(a.begin(),a.end());

    long long diff=a[0];

    for(int i=1;i<n;i++){
        diff=min(diff,a[i]-a[i-1]);
    }

    cout<<diff<<endl;
        }else {

    sort(a.begin(),a.end());

    long long d2=a[0];


    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            long long diff=a[j]-a[i];

            d2=min(d2,diff);

            auto it=lower_bound(a.begin(),a.end(),diff);

            if(it!=a.end())
                d2=min(d2,abs(*it-diff));

            if(it!=a.begin()){

                --it;

                d2=min(d2,abs(*it-diff));
            }
        }
    }

    cout<<d2<<endl;
}
    }
}