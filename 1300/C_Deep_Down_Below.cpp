#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
        cin>>n;
        vector<pair<long long,int>>p(n);
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            long long mx=0;
            for(int j=0;j<k;j++){
                long long a;cin>>a;
                if(a-j+1>mx){
                    mx=a-j+1;
                }
            }
            p[i]={mx,k};
        }
        sort(p.begin(),p.end());
        long long ans=p[0].first;
        long long curr=ans+p[0].second;
        for(int i=1;i<n;i++){
            if(curr<p[i].first){
                ans+=p[i].first-curr;
                curr=p[i].first;
            }
            curr+=p[i].second;
        }
        cout<<ans<<endl;
	}
}
