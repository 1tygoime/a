#include <bits/stdc++.h>
using namespace std;
#define ll long long
int upper(0),lower(0);



int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i]))
            upper++;
        if(islower(s[i]))
            lower++;
    }
    for(int i = 0; i < s.size(); i++)
        cout <<(upper>lower?(char)toupper(s[i]):(char)Vitolower(s[i]));
}
