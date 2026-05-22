#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<long long> a(n);
        map<long long,int> mp;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        long long ans = 0;

        while(!mp.empty()) {

            auto s = mp.begin();

            long long curr = s->first;
            curr--;

            vector<long long> eraseList;

            for(auto x : mp) {

                if(x.first == curr + 1 && x.second > 0) {

                    mp[x.first]--;

                    if(mp[x.first] == 0)
                        eraseList.push_back(x.first);

                    curr = x.first;
                }
                else if(x.first > curr + 1) {
                    break;
                }
            }

            for(auto v : eraseList)
                mp.erase(v);

            ans++;
        }

        cout << ans << endl;
    }
}