#include <bits/stdc++.h>
using namespace std;

int main(){
    int count(0);
    string str1,str2;
    str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int arr[255];
    getline(cin,str2);
    for (int i = 0; i < 255; i++) arr[i] = 0;
    for (int i = 0; i < str1.length();i++) arr[str1[i]] = 1;
    for (int i = 0; i < str2.length();i++)
        if (arr[toupper(str2[i])] == 1) arr[toupper(str2[i])] = -1;
    for (int i = 65; i < 91; i++) if (arr[i] == -1) count++;
    if (count == 26) cout << "YES";
    else cout << "NO";
    return 0;
}