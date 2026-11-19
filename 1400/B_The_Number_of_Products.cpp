#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<vector<long long>>dp(2,vector<long long>(n));
    dp[0][0]=(a[0]>0)?1:0;
    dp[1][0]=!dp[0][0];
    for(int i=1;i<n;i++){
        if(a[i]>0){
            dp[0][i]=dp[0][i-1]+1;
            dp[1][i]=dp[1][i-1];
        }else{
            dp[0][i]=dp[1][i-1];
            dp[1][i]=dp[0][i-1]+1;
        }
    }
    long long po=0;long long ne=0;
    for(int i=0;i<n;i++){
        po+=dp[0][i];
        ne+=dp[1][i];
    }
    cout<<ne<<" "<<po<<endl;
}