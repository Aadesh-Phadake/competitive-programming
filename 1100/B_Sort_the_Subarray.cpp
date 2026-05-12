#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int l=0;
        for(l;l<n;l++)if(a[l]!=b[l])break;
        int r=n-1;
        for(r;r>=0;r--)if(a[r]!=b[r])break;
        while (l > 0 && b[l] >= b[l - 1]) l--;
        while (r < n - 1 && b[r] <= b[r + 1]) r++;
        cout<<l+1<<" "<<r+1<<endl;
    }
}