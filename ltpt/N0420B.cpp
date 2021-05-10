#include <bits/stdc++.h>
using namespace std;
long long a[100005],b[100005];
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        b[i]=a[i];
    }
    if (n <= 4){
        for (int i = 1; i <= n; i++)
            cout << i << ' ';
    }
    else{
        sort(a+1,a+n+1);
        int dem(0);
        for (int i = 1; i <= n; i++){
            if (b[i]==a[1]||b[i]==a[2]||b[i]==a[3]||b[i]==a[4]){
                cout << i << ' ';
                dem++;
            }
            if (dem == 4)
                return 0;
        }
    }
    return 0;
}
