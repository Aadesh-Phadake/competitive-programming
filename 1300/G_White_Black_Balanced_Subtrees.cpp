#include <bits/stdc++.h>
using namespace std;

int ans;

pair<int,int> dfs(vector<vector<int>>& adj, string& s, int u){
    int white = 0;
    int black = 0;

    if(s[u-1] == 'W') white++;
    else black++;

    for(auto v : adj[u]){
        auto [w, b] = dfs(adj, s, v);
        white += w;
        black += b;
    }

    if(white == black) ans++;

    return {white, black};
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n + 1);

        for(int i = 2; i <= n; i++){
            int p;
            cin >> p;
            adj[p].push_back(i);
        }

        string s;
        cin >> s;

        ans = 0;

        dfs(adj, s, 1);

        cout << ans << "\n";
    }
}