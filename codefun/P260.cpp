#include <bits/stdc++.h>
using namespace std;

int main(){
    long long lower(0),upper(0),digit(0);
    string str1;
    cin >> str1;
    long long length = str1.length() - 1;
    for (long long i = 1; i <= length; i++){
        if (islower(str1[i])) lower++;
        if (isupper(str1[i])) upper++;
        if (isdigit(str1[i])) digit++;
    }
    if(lower > 0 && upper > 0 && digit > 0) cout << "Perfect";
    else cout << "Not perfect";
    return 0;
}