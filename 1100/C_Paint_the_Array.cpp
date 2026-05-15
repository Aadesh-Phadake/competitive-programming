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
        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        long long d=a[0];
        for(int i=2;i<n;i+=2){
            d=gcd(d,a[i]);
        }
        for(int i=1;i<n;i+=2){
            if(a[i]%d==0){
                d=0;
                break;
            }
        }
        
        if(d!=0){
            cout<<d<<endl;continue;
        }
        d=a[1];
        for(int i=3;i<n;i+=2){
            d=gcd(d,a[i]);
        }
        for(int i=0;i<n;i+=2){
            if(a[i]%d==0){
                d=0;break;
            }
        }
        cout<<d<<endl;


    }
}