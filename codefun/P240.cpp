// temp cu //
#include <bits/stdc++.h>
using namespace std;

string add(string a, string b)
{
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=a[i]-48 + b[i]-48 + carry;
        carry=tmp/10;
        tmp=tmp%10;
        res=(char)(tmp+48)+res;
    }
    if(carry>0) res="1"+res;
    return res;
}

string mul(string a, string b){
    string sum="",tmp="";
    int m=-1,i,j;
    for (int i = a.length()-1; i >= 0; i--){
        m++;
        tmp="";
        for (int j = 1; j <= a[i] - '0'; j++)
            tmp=add(tmp,b);
        for (int j = 1; j <= m; j++)
            tmp = tmp +'0';
        sum=add(tmp,sum);
    }
    return sum;
}

int main(){
    string m,n;
    cin >> m >> n;
    cout << mul(m,n);
    return 0;
}
