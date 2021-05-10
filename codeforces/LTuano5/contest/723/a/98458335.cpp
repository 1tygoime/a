#include <bits/stdc++.h>
using namespace std;

int min3(int a, int b,int c){
    return min(min(a,b),c);
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << min3(abs(a-c)+abs(b-c),abs(a-b)+abs(c-b),abs(b-a)+abs(c-a));
    return 0;
}
