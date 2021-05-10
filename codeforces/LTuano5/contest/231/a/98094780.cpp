#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,x,cnt(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        int s(0);
        for (int j = 0; j < 3; j++){
//            int s(0);
            cin >> x;
            if(x==1)
                s++;
        }
        if(s>=2)
            cnt++;
        s=0;
    }
    cout<<cnt;
    return 0;
}
