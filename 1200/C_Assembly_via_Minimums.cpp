#include <bits/stdc++.h>
using namespace std;
long long sum(long long n){
    return n * (n + 1) / 2;
}
int main() {

    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin>>n;
        vector<int>b(n*(n-1)/2);
        for(int i=0;i<(n*(n-1)/2);i++)cin>>b[i];
        sort(b.begin(),b.end());
        vector<int>a(n);
        int curr=0;
        for(int i=0;i<n-1;i++){
            a[i]=b[curr];
            curr+=(n-i-1);
        }
        a[n-1]=1000000000;

        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}