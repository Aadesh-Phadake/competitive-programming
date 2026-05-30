#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set<string>st;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string str=s.substr(i,j-i+1);
                st.insert(str);
            }
        }
        string ans="";
        bool done=false;
        for(char c='a';c<='z';c++){
            ans.push_back(c);
            if(st.find(ans)==st.end()){
                done=true;break;
            }
            else ans.pop_back();
        }
        
        if(!done){
            ans="";
            for(char c='a';c<='z';c++){
                ans.push_back(c);
                for(char d='a';d<='z';d++){
                    ans.push_back(d);
                    if(st.find(ans)==st.end()){
                        done=true;
                        break;
                    }else ans.pop_back();
                }
                if(done)break;
                else ans="";
            }
        }
        if(!done){
            ans="";
            for(char c='a';c<='z';c++){
                ans.push_back(c);
                for(char d='a';d<='z';d++){
                    ans.push_back(d);
                    for(char e='a';e<='z';e++){
                        ans.push_back(e);
                    if(st.find(ans)==st.end()){
                        done=true;
                        break;
                    }else ans.pop_back();
                    }
                    if(done)break;
                    else ans.pop_back();
                }
                if(done)break;
                else ans="";
            }
        }
        cout<<ans<<endl;
    }
}
