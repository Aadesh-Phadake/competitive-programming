#include <bits/stdc++.h>
using namespace std;
long long sum(long long n){
    return n * (n + 1) / 2;
}
int main() {

    int t;
    cin >> t;

    while (t--) {
        
        long long n,x,y;
        cin >> n >> x >> y;
        long long l=lcm(x,y);
        long long plus=n/x-n/l;
        long long minus=n/y-n/l;
        long long s1=sum(n)-sum(n-plus);
        long long s2=sum(minus);
        cout<<s1-s2<<endl;
        
    }
}