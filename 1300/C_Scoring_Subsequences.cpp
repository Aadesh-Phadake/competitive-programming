#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i=0;i<n;i++) cin >> a[i];

        for(int i=0;i<n;i++) {
            int l=0,r=i,ans=i;

            while(l<=r) {
                int mid=l+(r-l)/2;
                int len=i-mid+1;

                if(a[mid]>=len) {
                    ans=mid;
                    r=mid-1;
                } else {
                    l=mid+1;
                }
            }

            cout << i-ans+1 << " ";
        }
        cout << endl;
    }
}