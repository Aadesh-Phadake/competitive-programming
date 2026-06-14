#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        long long largestSum1=a[0];
    long long currSum=0;
    for(int i=0;i<n-1;i++){
        currSum+=a[i];
        if(currSum>largestSum1)largestSum1=currSum;
        if(currSum<0)currSum=0;
    }
    long long largestSum2=a[0];
     currSum=0;
    for(int i=1;i<n;i++){
        currSum+=a[i];
        if(currSum>largestSum2)largestSum2=currSum;
        if(currSum<0)currSum=0;
    }
    long long s=max(largestSum1,largestSum2);


        if(sum>s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}