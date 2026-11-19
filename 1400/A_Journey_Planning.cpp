#include <bits/stdc++.h>
using namespace std;

// int fn(int i,int prev,vector<int>&b,vector<vector<int>>&dp){
//     if(i==b.size()+1)return 0;
//     if(dp[i][prev]!=-1)return dp[i][prev];
//     int not_take=fn(i+1,prev,b,dp);
//     int take=0;
//     if(prev==0||b[i-1]-b[prev-1]==i-prev)take=b[i-1]+fn(i+1,i,b,dp);
//     return dp[i][prev]=max(take,not_take);
// }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>b[i];
    map<int,long long> groupSum;
for (int i = 1; i <= n; i++) groupSum[b[i-1] - i] += b[i-1];
long long ans = 0;
for (auto &p : groupSum) ans = max(ans, p.second);
cout << ans << endl;
}