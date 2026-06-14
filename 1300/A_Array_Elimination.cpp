#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> cnt(30, 0);

        for(int x : a){
        for(int bit = 0; bit < 30; bit++){
        if(x & (1 << bit))
            cnt[bit]++;
        }
        }
        for(int k=1;k<=n;k++){
            bool done=true;
            for(int bit=0;bit<30;bit++){
                if(cnt[bit]%k!=0 && cnt[bit]!=0){
                    done=false;break;
                }
            }
            if(done)cout<<k<<" ";
        }
        cout<<endl;
	}
}
