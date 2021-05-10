#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int length = str.length();
    for(int i = 0; i < length; i++){
        if (str[i] == 32 && str[i+1] == 32){
            for(int j = i; j < length; j++){
                str[j] = str[j+1];
            }
            length--;
            i--;
        }
//        if (str[0] = 32){
//            xoa(str,0);
//            length--;
//        }
//        if (str[length-1] = 32){
//            xoa(str,length-1);
//            length--;
//        }
    }
    putchar(toupper(str[0]));
    for(int i = 1; i < length; i++) putchar(str[i]);
    return 0;
}

