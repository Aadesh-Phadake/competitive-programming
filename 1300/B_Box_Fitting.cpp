#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,w;
        cin>>n>>w;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        int height=1;
        int curr=w;
        while(!a.empty()){
            int i=lower_bound(a.begin(),a.end(),curr)-a.begin();
            if(i==0 && a[i]>curr){
                height++;curr=w;
            }else if(i==a.size() || a[i]>curr){
                curr-=a[i-1];
                a.erase(a.begin()+i-1);
            }else{
                curr-=a[i];
                a.erase(a.begin()+i);
            }
        } 
        cout<<height<<endl;
	}
}
