#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int i=0;
        for(i;i<n/2;i++){
            if(a[n-i-1]!=a[i])break;
        }
        if(i==n/2){
            cout<<"YES"<<endl;continue;
        }
        bool p1=true;
        int l=i;int r=n-i-1;
        while(l<=r){
            if(a[l]==a[r]){l++;r--;}
            else if(a[l]==a[i])l++;
            else if(a[r]==a[i])r--;
            else {p1=false;break;}
        }
        bool p2=true;
        l=i;r=n-i-1;
        while(l<=r){
            if(a[l]==a[r]){l++;r--;}
            else if(a[l]==a[n-i-1])l++;
            else if(a[r]==a[n-i-1])r--;
            else {p2=false;break;}
        }
        if(p1||p2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}