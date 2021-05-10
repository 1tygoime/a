#include<bits/stdc++.h>
using namespace std;

void lower(string &s){
    for(auto &c:s)
        c=tolower(c);
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    lower(s1);
    lower(s2);
    cout<<s1.compare(s2);
}
