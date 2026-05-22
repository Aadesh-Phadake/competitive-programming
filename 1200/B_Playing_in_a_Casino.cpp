#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>v(m,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[j][i];
            }
        }
        for(int i=0;i<m;i++){
            sort(v[i].begin(),v[i].end());
        }
        long long sum=0;
        for(int i=0;i<m;i++){
            long long preSum=0;
            for(int j=0;j<n;j++){
                long long plus=1LL*j*v[i][j];
                long long t=plus-preSum;
                sum+=t;
                preSum+=v[i][j];
            }
        }
        cout<<sum<<endl;

    }
}