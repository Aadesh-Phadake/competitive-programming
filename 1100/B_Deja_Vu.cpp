#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {    
        int n,q;
        cin>>n>>q;
        vector<long long>a(n);
        vector<long long>x(q);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<q;i++)cin>>x[i];
        int mn=31;
        for(int i=0;i<q;i++){
            if(x[i]<mn){
            long long p = 1LL << x[i];
            long long pw=1LL<<(x[i]-1);
            for(int j=0;j<n;j++){
                if(a[j] % p == 0) a[j] += pw;
            }
            mn=x[i];
            }
             
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}