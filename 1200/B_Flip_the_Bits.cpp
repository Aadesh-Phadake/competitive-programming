#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        int z=0;int o=0;
        vector<bool>eq(n,false);
        for(int i=0;i<n;i++){
            if(a[i]=='0')z++;
            else o++;
            if(z==o)eq[i]=true;
        }
        int d=0;
        bool done=true;
        for(int i=n-1;i>=0;i--){
            if(d==0){
                if(a[i]!=b[i]){
                    if(!eq[i]){
                    done=false;
                    break;
                    }
                    d=1;
                }

            }else {
                if(a[i]==b[i]){
                    if(!eq[i]){
                    done=false;
                    break;
                    }
                    d=0;
                }
            }
        }
        if(done)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}

	return 0;
}
