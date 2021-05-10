#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    ull ts(1),ms(1),ts1,ms1,ts2,ms2;
    while (cin >> ts1 >> ms1){
        ull tmp = __gcd(ts1,ms1);
        ts1 /= tmp;
        ms1 /= tmp;
        ts *= ts1;
        ms *= ms1;
    }
    ull temp = __gcd(ts,ms);
    ts /= temp;
    ms /= temp;
    cout << ts << ' ' << ms;
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
