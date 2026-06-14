#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            int m;cin>>m;
            vector<int>c(m);
            for(int j=0;j<m;j++){
                cin>>c[j];
            }
            v.push_back(c);
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int x:v[i]){
                mp[x]++;
            }
        }
        bool ok =false;
        for(int i=0;i<n;i++){
            bool done =false;
            for(int x:v[i]){
                if(mp[x]==1){
                    done=true;break;
                }
            }
            if(!done){
                ok=true;break;
            }
        }
        if(ok)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}