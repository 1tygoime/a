#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,t;
    cin>>n>>t>>s;
    while(t--){
        for(int i = 0; i < s.size(); i++)
            if(s[i]=='B'&&s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
    }
    cout<<s;
    return 0;
}
