#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin>>n;
        vector<long long>factors;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                factors.push_back(i);
                if(i!=n/i)factors.push_back(n/i);
            }
        }
        long long a,b,c;
        bool done=false;
        for(int i=0;i<factors.size();i++){
            vector<int>f;
            for(int j=2;j*j<=factors[i];j++){
                if(factors[i]%j==0){
                f.push_back(j);
                if(j!=factors[i]/j)f.push_back(factors[i]/j);
            }
            }
            if(f.size()>=2){
                done =true;
                a=f[0];
                b=factors[i]/f[0];
                c=n/factors[i];
                if(a!=b && b!=c && a!=c)break;
                done=false;
            }
        }
        if(done){
            cout<<"YES"<<endl;
            cout<<a<<' '<<b<<' '<<c<<endl;
        }else cout<<"NO"<<endl;
    }
}