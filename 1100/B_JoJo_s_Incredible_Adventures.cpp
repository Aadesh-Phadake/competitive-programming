#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin>>s;
        long long n = s.size();
        s += s;

        long long mx = 0, cur = 0;
 
        for(char c : s){
        if(c == '1'){
        cur++;
        mx = max(mx, cur);
        }
        else{
        cur = 0;
        }
        }
        mx = min(mx, n);
        if(mx==n){
            cout<<1LL*n*n<<endl;continue;
        }
        long long a = (mx+ 1) / 2;
        long long b = (mx + 1) - a;
        long long ans = a * b;
        cout<<ans<<endl;

    }
}