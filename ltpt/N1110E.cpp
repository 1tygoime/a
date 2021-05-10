#include <bits/stdc++.h>
using namespace std;

int a[32770],n,k,cnt(0);
string s;
string word[32770];
map<string,bool> ok;
int t(0);

void init(){
    for (int i = 1; i <= n; i++)
        a[i]=i;
}

void Xuat(){
    string tmp="";
    for (int i = 1; i <= k; i++){
        tmp+= s[a[i]-1];
    }
    word[t]=tmp;
    t++;
}

void Try(int i){
    for (int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if (i == k){
            Xuat();
        }
        else
            Try(i+1);
    }
}

int main(){
    cin>> s;
    n=s.length();
    k=1;
    init();
    while(k<=n){
        Try(1);
        k++;
    }
    sort(word,word+t);
//    for (int i = 0; i < t; i++)
//        cout << word[i] << endl;
    for (int i = 0; i < t; i++)
        ok[word[i]]=true;
    for (int i = 0; i < t; i++){
        if (ok[word[i]]){
            cout << word[i]<<'\n';
            ok[word[i]]=false;
        }
    }
    return 0;
}
