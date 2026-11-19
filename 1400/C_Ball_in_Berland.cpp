#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int a,b,k;
        cin>>a>>b>>k;
        vector<int>boy(k);
        vector<int>girl(k);
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(int i=0;i<k;i++){
            cin>>boy[i];
        }
        for(int i=0;i<k;i++)cin>>girl[i];
        long long pairs=0;
        for(int i=0;i<k;i++){
            int c1=(m1.find(boy[i])!=m1.end())?m1[boy[i]]:0;
            int c2=(m2.find(girl[i])!=m2.end())?m2[girl[i]]:0;
            int c=c1+c2;
            pairs+=1ll*(i-c);
            m1[boy[i]]++;
            m2[girl[i]]++;
        }
        cout<<pairs<<endl;

    }
}