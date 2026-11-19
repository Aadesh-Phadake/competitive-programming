#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>zeroes;
        int t=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            bool done=true;
            int z=0;
            while(a[i]>0){
                int d=a[i]%10;
                if(d==0 && done){
                    z++;
                }else done=false;
                t++;
                a[i]/=10;
            }
            if(z>0)zeroes.push_back(z);
        }
        sort(zeroes.begin(),zeroes.end(),greater<int>());
        for(int i=0;i<zeroes.size();i+=2){
            t-=zeroes[i];
        }
        if(t>m)cout<<"Sasha"<<endl;
        else cout<<"Anna"<<endl;
    }
}