#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n,x,m;
        cin>>n>>x>>m;
        long long mn=x,mx=x;
        for(int i=0;i<m;i++){
            int l,r;
            cin>>l>>r;
            if(mn>=l && mx<=r){
                mn=l;mx=r;
            }else if(mn<=l && mx<=r && mx>=l){
                mx=r;
            }else if(mn>=l && mn<=r && mx>=r){
                mn=l;
            }
        }
        cout<<mx-mn+1<<endl;
    }
}