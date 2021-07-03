#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x1,y1,x2,y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    if (n < 3){
        cout << "NO";
    }
    else
        cout << ((n==3&&x1==2&&y1==2)?"NO":"YES");
    return 0;
}
