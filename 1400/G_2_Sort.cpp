#include <bits/stdc++.h>
using namespace std;

void solve() {
		int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=0;
        int l=0;
        for(int r=1;r<n;r++){
            if(a[r-1]<2*a[r]){
                if(r-l==k){
                    ans++;l++;
                }
            }else{
                l=r;
            } 
        }
        cout<<ans<<endl;
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
