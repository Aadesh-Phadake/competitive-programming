#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		long long n,k;
        cin>>n>>k;
        if(n%2==0){
            if(k%n==0)cout<<n<<endl;
            else cout<<k%n<<endl;
            continue;
        }
		long long x=n/2;
		if((k+(((k+x-1)/x)-1))%n==0)cout<<n<<endl;
		else cout<<(k+(((k+x-1)/x)-1))%n<<endl;


	}

	return 0;
}
