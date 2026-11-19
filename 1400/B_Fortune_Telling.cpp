#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n,x,y;
        cin>>n>>x>>y;
        int i=x%2,j=y%2;
        vector<int>a(n);
        int no=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0)no++;
        }
        if(i==j){
            if(no%2==0)cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }else {
            if(no%2==0)cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
        

}
}