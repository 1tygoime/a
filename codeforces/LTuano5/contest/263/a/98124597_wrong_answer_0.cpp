
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    long long x,s(0);
    //cin >> n;
    for(int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            cin >> x;
            if(x==1)
                s+=abs(j-(n+1)/2)+abs(i-(n+1)/2);
        }
    }
    cout<<s;
    return 0;
}