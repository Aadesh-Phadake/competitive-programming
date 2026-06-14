#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    long long sum=0;
    unordered_map<long long,vector<int>>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]].push_back(i+1);
        sum+=a[i];
    }
    set<int>ans;
    for(int i=0;i<n;i++){
        long long need = (long long)(sum - 2*a[i]);
        if(mp.count(need)){
            for(int j=0;j<mp[sum-(2*a[i])].size();j++){
                if(mp[sum-(2*a[i])][j]-1!=i)ans.insert(mp[sum-(2*a[i])][j]);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int x:ans){
        cout<<x<<" ";
    }

    return 0;
}