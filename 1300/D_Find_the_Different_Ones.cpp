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
        vector<int>h(n,-2);
        for(int i=0;i<n;i++){
            bool done =false;
            for(int j=i+1;j<n;j++){
                if(a[j]!=a[i]){h[i]=j;i=j-1;done=true;break;}
            }
            if(!done){
                h[i]=-1;
                break;
            }
        }
        for(int i=1;i<n;i++){
            if(h[i]==-2)h[i]=h[i-1];
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int l;int r;
            cin>>l>>r;
            if(h[l-1]==-1 ||h[l-1]>r-1)cout<<-1<<" "<<-1<<endl;
            else cout<<l<<" "<<h[l-1]+1<<endl;
        }
        cout<<endl;
	}
}
