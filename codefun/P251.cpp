#include <bits/stdc++.h>
using namespace std;
int main(){
    int count(1),sentence(0);
    string str,token;
    getline(cin,str);
    for (long long i = 0; i < str.length(); i++){
        if (str[i] == ' ') count++;
    }
    for(long long i = 0; i < str.length(); i++){
        if(str[i] == '.' || str[i] == '!') sentence++;
    }
    cout << count << ' ' << sentence;
    return 0;
}
