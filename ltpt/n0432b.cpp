#include <bits/stdc++.h>
using namespace std;
#define MAX 100005

void up(int a[], int lct)
{
    int tmp = a[lct];
    for (int i = lct; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = tmp;
}

int main()
{
    int a[MAX], n, b[MAX];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // lech thu tu nen can 2 lan up
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            up(a, i);
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            up(a, i);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
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
