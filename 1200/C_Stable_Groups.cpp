#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n,k,x;
    cin>>n>>k>>x;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    vector<long long>gaps;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]>x)gaps.push_back(a[i]-a[i-1]);
    }
    int ans=gaps.size()+1;
    sort(gaps.begin(),gaps.end());
    for(int i=0;i<gaps.size();i++){
        if(k>=(gaps[i]-1)/x){
            k-=(gaps[i]-1)/x;
            ans--;
        }
        else break;
    }
    cout<<ans<<endl;

	return 0;
}
