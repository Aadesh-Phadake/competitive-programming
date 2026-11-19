#include <bits/stdc++.h>
using namespace std;

void solve() {
		int n,m;
        cin>>n>>m;
        vector<int>a(m);
        vector<int>b(n+1,0);
        for(int i=0;i<m;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        int l=1;
        int r=2*m;
        while(l<r){
            int mid=l+(r-l)/2;
            long long t=0;
            for(int i=1;i<=n;i++){
                t+=min(mid,b[i]+(mid-b[i])/2);
            }
            if(t>=m)r=mid;
            else l=mid+1;
        }
        cout<<l<<endl;
}

int main() {
		cin.sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int t; cin >> t;
		while (t--) {
				solve();
		}
}
