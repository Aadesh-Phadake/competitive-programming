#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    long long d=n-k+1;
    vector<int>a(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<long long>p(n+1,0);
    p[0]=0;
    for(int i=1;i<=n;i++){
        p[i]=p[i-1]+a[i];
    }
    long long sum=0;
    for(int i=k;i<=n;i++){
        sum+=p[i]-p[i-k];
    }
    long double ans =(long double)sum/d;
    cout << fixed << setprecision(10) << ans << '\n';



    return 0;
}