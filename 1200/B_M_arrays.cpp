#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]%m]++;
        }
        int ans=0;
        if(mp[0])ans++;
        for(int i=1;i<=m/2;i++){
            if(i==m-i){
                if(mp[i])ans++;
                continue;
            }
            if(mp[i] || mp[m-i])ans+=1 + max(0,abs(mp[i]-mp[m-i])-1);
        }
        cout<<ans<<endl;
	}

	return 0;
}
