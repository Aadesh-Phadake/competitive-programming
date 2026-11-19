#include <bits/stdc++.h>
using namespace std;

const int N=200005;

vector<pair<int,int>> adj[N];
int dp[N],ans;

void dfs(int u,int p,int prevIdx){

    ans=max(ans,dp[u]);

    for(auto [v,idx]:adj[u]){

        if(v==p) continue;

        dp[v]=dp[u];

        if(idx<prevIdx)
            dp[v]++;

        dfs(v,u,idx);
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--){

        int n;
        cin>>n;

        for(int i=1;i<=n;i++){
            adj[i].clear();
            dp[i]=0;
        }

        ans=0;

        for(int i=1;i<n;i++){

            int u,v;
            cin>>u>>v;

            adj[u].push_back({v,i});
            adj[v].push_back({u,i});
        }

        dfs(1,0,0);

        cout<<ans+1<<endl;
    }
}