#include <bits/stdc++.h>
using namespace std;
long long a[100005],x,k;
int n;
void nhap(){
    cin >> n >> x;
    for (int i = 0 ; i < n; i++)
        cin >> a[i];
    int i = n-x%n;
    for (int j = 0; j < n; j++,i++)
        cout<<a[i%n] <<' ';
}


int main(){
    nhap();
    return 0;
}
// old ver
//#include <bits/stdc++.h>
//using namespace std;
//long long a[100005],n,x,b[100005],k;
//void up(){
//    int tmp = a[n-1];
//    for (int i = n-1; i >= 0; i--){
//        a[i+1]=a[i];
//    }
//    a[0]=tmp;
//}
//
//void nhap(){
//    cin >> n >> x;
//    for (int i = 0 ; i < n; i++)
//        cin >> a[i];
//    k = x%n;
//}
//
//void xuat(){
//    for (int i = 0; i < n; i++)
//        cout << a[i] << ' ';
//}
//
//int main(){
//    nhap();
//    while(k--)
//        up();
//    xuat();
//    return 0;
//}
