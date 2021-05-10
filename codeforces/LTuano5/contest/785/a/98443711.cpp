#include <bits/stdc++.h>
using namespace std;
int main(){
    long long res(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s=="Tetrahedron")
            res+=4;
        else if(s=="Cube")
            res+=6;
        else if(s=="Octahedron")
            res+=8;
        else if(s=="Dodecahedron")
            res+=12;
        else if(s=="Icosahedron")
            res+=20;
    }
    cout<<res;
    return 0;
}
