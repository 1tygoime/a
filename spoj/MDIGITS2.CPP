#include <bits/stdc++.h>
using namespace std;
long long n;

int main(){
    int n;
    string s="";
    cin >> n;
    for(int i = 1; i <= 100000; i++)
        s+=to_string(i);
    cout<<(int)s.find(to_string(n))+1;
    return 0;
}

/* LTo5 */
