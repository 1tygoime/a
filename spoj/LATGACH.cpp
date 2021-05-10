#include <bits/stdc++.h>
using namespace std;

string F[200];

string operator +(string a, string b){
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=a[i]-'0' + b[i]-'0' + carry;
        carry=tmp/10;
        tmp=tmp%10;
        res=(char)(tmp+'0')+res;
    }
    if(carry>0) res='1'+res;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    F[0]="0";
    F[1]="1";
    for(int i = 2; i <= 200; i++)
        F[i]=F[i-1]+F[i-2];
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << F[++x];
        if(t > 0)
            cout<<'\n';
    }
    return 0;
}

// LTO5
