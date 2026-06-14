#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long ans=0;
    long long w=0;
    long long v=0;
    long long n=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='v')v++;
        else {if(v>1)w+=v-1;
        v=0;}
    }
    if(v>1) w += v-1;
    n=w;
    v=0;
    w=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='v')v++;
        else{
            if(v>1)w+=v-1;
            v=0;
            ans+=1ll*w*(n-w);
        }
    }
    cout<<ans<<endl;
}
