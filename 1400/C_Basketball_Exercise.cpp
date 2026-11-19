#include <bits/stdc++.h>
using namespace std;
 
long long fn(int row,int i,vector<int>&a,vector<int>&b,vector<vector<long long>>&dp){
    if(i<0)return 0;
    if(dp[i][row]!=-1)return dp[i][row];
    long long not_take=fn(row,i-1,a,b,dp);
    long long take;
    if(row==0){
        take=max(a[i]+fn(1,i-1,a,b,dp),b[i]+fn(2,i-1,a,b,dp));
    }else if (row==1){
        take=b[i]+fn(2,i-1,a,b,dp);
    }else take=a[i]+fn(1,i-1,a,b,dp);

    return dp[i][row]=max(take,not_take);

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    vector<vector<long long>>dp(n,vector<long long>(3,-1));
    cout<<fn(0,n-1,a,b,dp);
}