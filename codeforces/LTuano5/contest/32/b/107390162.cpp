#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
 
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.')
            cout << 0;
        else if(s[i + 1] == '.'){ // -.
            cout << 1;
            i++;
        }
        else{ // --
            cout << 2;
            i++;
        }
    }
    return 0;
}