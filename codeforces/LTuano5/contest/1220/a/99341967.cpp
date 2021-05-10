/*
    LTo5
    non ngay?
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int n,c1,c0;
char c;

int main(){
    fast
    for (cin >> n; n--; ){
        cin >> c;
        c1 += (c=='n');
        c0 += (c=='z');
    }
    while(c1--)
        cout << "1 ";
    while(c0--)
        cout << "0 ";
    return 0;
}