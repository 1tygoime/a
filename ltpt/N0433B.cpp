#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[100000];
    int n,cnt(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 1)
            cnt++;
    }
    if (cnt == 0)
        cout << -1;
    else
        if (cnt == n){
            for (int i = 1; i <= n; i++)
                cout << 1 << ' ';
        }
        else if (cnt == 1) cout << 1;
        else{
            int dem(1),m(1),c(1);
            for (int i = 2; i <= n+1; i++){
                if (a[i] == 1 && a[i-1] == 1) dem++;
                else{
                    if (m <= dem){ m = dem;
                        c=i-1;
                    }
                    dem = 1;
                }
            }
            for (int i = c-m+1; i <= c; i++)
                cout << a[i] << ' ';
    }
    return 0;
}

//#define MAX 100
//
//long long minnHang(long long a[][MAX], long long hang, long long cot){
//    long long minn = a[hang][0];
//    for (long long i = 0; i < cot; i++)
//        if (minn > a[hang][i]) minn = a[hang][i];
//    return minn;
//}
//
//int main(){
//    long long a[MAX][MAX], m, n;
//    cin >> n >> m;
//    for (long long i = 0; i < n; i++){
//        for (long long j = 0; j < m; j++)
//            cin >> a[i][j];
//    }
//    long long minn = minnHang(a,0,m);
//    for (long long i = 0; i < n; i++){
//        if (minn < minnHang(a,i,m)) minn = minnHang(a,i,m);
//    }
//    cout << minn;
//    return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    char RightAns[] = {'B', 'C', 'D', 'B', 'A', 'D', 'C', 'D', 'A', 'B', '\0'};
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++){
//        char StudentAns[1000];
//        int diem(0);
//        for (long long j = 0; j < 10; j++){
//            cin >> StudentAns[j];
//            if ((int)StudentAns[j] == (int)RightAns[j]) diem++;
//        }
//        cout << diem << "/10 \n";
//    }
//    return 0;
//}
