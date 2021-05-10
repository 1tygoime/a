#include<bits/stdc++.h>
using namespace std;
int d[255],cnt(0);
int main(){
    string s;
    cin >> s;
    for (auto &c:s)
        d[c]++;
    for (int i = 0; i < 255; i++)
        cnt+=(d[i]>0?1:0);
    cout << (cnt%2?"IGNORE HIM!":"CHAT WITH HER!");
}
