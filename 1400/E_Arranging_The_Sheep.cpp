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
        int stars=0;
        string s;
        cin>>s;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                stars++;mp[stars]=i;
            }
        }
        int m=stars/2+1;
        int ind=mp[m];
        long long ans=0;
        for(auto [key,val]:mp){
            if(key<m){
                ans+=ind-val-m+key;
            }else if(key>m){
                ans+=val-ind-key+m;
            }
        }
        cout<<ans<<endl;
        
    }
}