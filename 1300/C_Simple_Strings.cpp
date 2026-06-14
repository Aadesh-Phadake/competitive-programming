#include <bits/stdc++.h>
using namespace std;

char nextChar(char c) {
    return (c == 'z') ? 'a' : c + 1;
}
int main() {
    string s;
    cin>>s;
    for(int i=1;i<s.size()-1;i++){
        if(s[i]==s[i-1]){
            for(char c='a';c<='z';c++){
                if(c!=s[i-1] && c!=s[i+1]){
                    s[i]=c;
                    break;
                }
            }
        }
    }
    if(s[s.size()-1]==s[s.size()-2]){
        for(char c='a';c<='z';c++){
                if(c!=s[s.size()-2]){
                    s[s.size()-1]=c;
                    break;
                }
            }
    }
    cout<<s<<endl;



    return 0;
}