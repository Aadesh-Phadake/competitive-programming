#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>inf(m);
        for(int i=0;i<m;i++)cin>>inf[i];
        sort(inf.begin(),inf.end());
        vector<int>gaps;
        for(int i=0;i<m-1;i++){
            gaps.push_back(inf[i+1]-inf[i]-1);
        }
        gaps.push_back((n-inf[m-1])+(inf[0]-1));
        sort(gaps.begin(),gaps.end(),greater<int>());
        int pro=0;
        for(int i=0;i<gaps.size();i++){
            int r=gaps[i]-(4*i);
            if(r<=0)continue;
            else if(r==1)pro++;
            else pro+=r-1;
        }
        cout<<n-pro<<endl;

        
    }
}