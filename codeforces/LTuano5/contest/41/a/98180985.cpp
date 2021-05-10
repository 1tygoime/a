#include <bits/stdc++.h>
using namespace std;
long long n;

int main(){
    string s,s1;
    cin >> s >> s1;
    reverse(s1.begin(),s1.end());
    cout<<(s==s1?"YES":"NO");
    return 0;
}
