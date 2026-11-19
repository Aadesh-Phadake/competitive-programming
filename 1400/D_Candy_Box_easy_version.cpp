#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[a[i]]++;
        vector<int>f;
        for(auto [i,j]:mp){
            f.push_back(j);
        }
        sort(f.begin(),f.end(),greater<int>());
        int last=INT_MAX;
        long long ans=0;
        for(int i=0;i<f.size();i++){
            if(f[i]>=last)last--;
            else last=f[i];
            if(last<=0)break;
            ans+=last;
        }
        cout<<ans<<endl;
    }
}