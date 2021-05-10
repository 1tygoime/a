#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,s;
    getline(cin,s);
    getline(cin,s1);
    getline(cin,s2);
    int n = s.length(),n1 = s1.length(),n2=s2.length();
    for (int i = 0; i < n; i++){
        string t = s.substr(i,n1);
        if (t == s1){
            s.replace(i,n1,s2);
            if (n1 < n2)
                n += (n1-n2);
            if (n1 > n2)
                n -= (n1-n2);
        }
    }
    cout << s;
    return 0;
}
