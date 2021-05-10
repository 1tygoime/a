#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    int d[10];
    memset(d,0,sizeof(d));
    for(int i = 0; i < s.size(); i++)
        d[s[i]-'0']++;
    for(int i = 0; i <= 9; i++)
        if(d[i]>1)
            return false;
    return true;
}

string tostring(int n){
    string res="";
    for(;n>0;n/=10)
        res=res+(char)(n%10+'0');
    return res;
}

int main (){
    int n;
    cin >> n;
    string t=tostring(++n);
    while(!check(t)){
        n++;
        t=tostring(n);
    }
    cout<<n;
    return 0;
}
