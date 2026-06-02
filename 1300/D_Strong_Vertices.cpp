#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        vector<int>diff(n);
        vector<int>strong;
        for(int i=0;i<n;i++){
            diff[i]=a[i]-b[i];
        }
        int mx=*max_element(diff.begin(),diff.end());
        for(int i=0;i<n;i++){
            if(diff[i]==mx)strong.push_back(i+1);
        }
        cout<<strong.size()<<endl;
        for(int i=0;i<strong.size();i++){
            cout<<strong[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}