// Khi them tong cac phan tu lien tuc vao doan moi phia sau ta luon thu duoc 1 doan co tong lon hon phia truoc
// Khi s<0, ta tim doan moi

#include <bits/stdc++.h>
using namespace std;
#define MAX 200005
long long x,s(0),ma(LLONG_MIN);
int main(){
    int n;
    cin >> n;
    while(n--){
        cin >> x;
        s+=x;
        ma=max(s,ma);
        if (s < 0)
            s=0;
    }
    cout<<ma;
    return 0;
}
