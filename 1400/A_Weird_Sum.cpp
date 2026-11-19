#include <bits/stdc++.h>
using namespace std;

void solve() {
		int n,m;
        cin>>n>>m;
        vector<vector<int>>r(100001);
        vector<vector<int>>c(100001);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int num;cin>>num;
                r[num].push_back(i);
                c[num].push_back(j);
            }
        }
        long long ans=0;
        for(int i=1;i<r.size();i++){
            sort(r[i].begin(),r[i].end());
            int k=r[i].size();
            for(int j=0;j<k;j++){
                ans+=1ll*r[i][j]*(2*j-k+1);
            }
        }
        for(int i=1;i<c.size();i++){
            sort(c[i].begin(),c[i].end());
            int k=c[i].size();
            for(int j=0;j<k;j++){
                ans+=1ll*c[i][j]*(2*j-k+1);
            }
        }
        cout<<ans<<endl;
}

int main() {
		cin.sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int t=1;
		while (t--) {
				solve();
		}
}
