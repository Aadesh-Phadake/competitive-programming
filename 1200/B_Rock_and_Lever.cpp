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
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int len = floor(log2(a[i])) + 1;
            mp[len]++;
        }
        long long ans=0;
        for(auto it:mp){
            ans+=1LL*(it.second)*(it.second-1)/2;
        }
        cout<<ans<<endl;
	}

	return 0;
}
