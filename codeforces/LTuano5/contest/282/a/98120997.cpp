#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,s1="++";
    int n;
    cin >> n;
    int t=0;
    for(int i = 0; i < n; i++){
        cin>>s;
        if(int(s.find(s1))>=0)
            t++;
        else
            t--;
    }
    cout<<t;
    return 0;
}
