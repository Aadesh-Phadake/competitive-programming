#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const vector<int>arr={4,8,15,16,23,42};
    unordered_map<int,pair<int,int>>mp;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            mp.insert({arr[i]*arr[j],make_pair(arr[i],arr[j])});
        }
    }
    vector<int>ans(6);
    cout<<"?"<<" "<<1<<" "<<2<<endl;
    int a;
    cin>>a;
    cout<<"?"<<" "<<2<<" "<<3<<endl;
    int b;
    cin>>b;
    auto [a1,a2]=mp[a];
    auto [b1,b2]=mp[b];
    if(a1==b1 ||a1==b2){
        ans[0]=a2;
        ans[1]=a1;
        ans[2]=a1==b1?b2:b1;
    }else {
        ans[0]=a1;
        ans[1]=a2;
        ans[2]=a2==b2?b1:b2;
    }

    cout<<"?"<<" "<<4<<" "<<5<<endl;
    int c;
    cin>>c;
    cout<<"?"<<" "<<5<<" "<<6<<endl;
    int d;
    cin>>d;
    auto [c1,c2]=mp[c];
    auto [d1,d2]=mp[d];
    if(c1==d1 ||c1==d2){
        ans[3]=c2;
        ans[4]=c1;
        ans[5]=c1==d1?d2:d1;
    }else {
        ans[3]=c1;
        ans[4]=c2;
        ans[5]=c2==d2?d1:d2;
    }
    cout<<"!"<<" "<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<" "<<ans[4]<<" "<<ans[5]<<endl;

}