#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<vector<int>>a(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        if(n==1){
            cout<<"YES"<<endl;continue;
        }
        int ops=0;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

        int ni = n-i-1;
        int nj = n-j-1;

        if(i > ni) continue;
        if(i == ni && j >= nj) continue;

        if(a[i][j] != a[ni][nj])
            ops++;
        }
        }
        if(ops==k){
            cout<<"YES"<<endl;continue;
        }
        if(ops > k){
        cout << "NO\n";
        }
        else{
        if(n % 2 == 1){
        cout << "YES\n";
        }
        else{
        if((k - ops) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
        }
        }
    }
}