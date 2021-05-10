#include <bits/stdc++.h>
using namespace std;

int main(){
    long long Amounta(0),Amountb(0),Amountc(0),others(0);
    string str;
    getline(cin,str);
    long long length = str.length();
    for (long long i = 0; i <= length - 1; i++){
        if (str[i] == 'a') Amounta++;
        if (str[i] == 'b') Amountb++;
        if (str[i] == 'c') Amountc++;
    }
    others = length - 1 - Amounta - Amountb - Amountc;
    cout << Amounta << '\n' <<  Amountb<< '\n' << Amountc << '\n' << others;
    return 0;
}