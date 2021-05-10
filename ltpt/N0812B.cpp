#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long

bool isPrime(ll n){
    if (n < 2)
        return false;
    else
        if (n == 2)
            return true;
        else
            if (n % 2 == 0)
                return false;
    else{
        for (int i = 3; i <= sqrt(n); i++)
            if (n % i == 0) return false;
        return true;
    }
}

int main(){
    int i = 2,n, dem = 0,tmp;
    cin >> n;
    while (dem < n){
        if (isPrime(i)){
            dem++;
            tmp = i;
        }
        i++;
    }
    cout << tmp;
    return 0;
}

//    for (auto x : str){
//        if (x == ' '){
//            cout << word << endl;
//            word = "";
////            a[i] = word;
////            i++;
////            word = "";
//        }
//        else word = word + x;
//
//    }
//            cout << word << endl;


//    long long n,a[100][100],tong(0);
//    cin >> n;
//    for (long long i = 0; i < n; i++){
//        for (long long j = 0; j < n; j++)
//            cin >> a[i][j];
//    }
//    for (long long i = 0; i < n; i++){
//        for (long long j = 0; j < n; j++){
//            if (i + j == n + 1){
//                long long x = i; long long y = j;
//                if (a[x][y] % 2 != 0) tong += a[x][y];
//                }
//            }
//    }
//    cout << tong;



//    int count(1),sentence(0);
//    string str,token;
//    getline(cin,str);
//    for (long long i = 0; i < str.length(); i++){
//        if (str[i] == ' ') count++;
//    }
//    for(long long i = 0; i < str.length(); i++){
//        if(str[i] == '.' || str[i] == '!') sentence++;
//    }
//    cout << count << ' ' << sentence;

//
//bool CheckPT(long long a, long long b, long long c){
//    long long denta = b*b-4*a*c;
//    if (denta < 0) return false;
//    else{
//        long double x1 = (-b + sqrt(denta))/(long double)(2*a);
//        long double x2 = (-b - sqrt(denta))/(long double)(2*a);
//        if (x1 == (long long)x1 && (x2 == (long long)x2))
//            return true;
//        else return false;
//    }
//}
//
//int main(){
//    long long n,count(0);
//    cin >> n;
//    for (long long i = 1; i <= n; i++){
//        long long a,b,c;
//        cin >> a >> b >> c;
//        if (CheckPT(a,b,c)) count++;
//    }
//    cout << count;
//    return 0;
//}

//
//#define MAX 1000
//
//long long TongCot(long long a[][MAX], long long dong, long long cot){
//    long long s(0);
//    for (long long i = 0; i < dong; i++){
//        s += a[i][cot];
//    }
//    return s;
//}
//
//int main(){
//    long long dong,cot,a[MAX][MAX],cotMAX,tongMAX;
//    cin >> dong >> cot;
//    for (long long i = 0; i < dong; i++){
//        for (long long j = 0; j < cot; j++)
//            cin >> a[i][j];
//    }
//    tongMAX = TongCot(a,dong,0);
//    for (long long i = 1; i < cot; i++){
//        if (tongMAX < TongCot(a,dong,i)) tongMAX = TongCot(a,dong,i);
//    }
//    for (long long i = 0; i < cot; i++){
//        if (tongMAX == TongCot(a,dong,i)){
//            cotMAX = i;
//            break;
//        }
//    }
//    cout << tongMAX << ' ' << cotMAX+1;
//    return 0;
//}
  //  long long n,a[100005],count(0);
//    cin >> n;
//    for (long long i = 1; i <= n; i++) cin >> a[i];
//    for (long long i = 1; i <= n - 1; i++){
//        for (long long j = i + 1; j <= n; j++){
//            if (a[i] > a[j]){
//                long long temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//    }
//    for (long long i = 1; i <= n; i++){
//        if (a[i] % 2 == 1){
//                cout << a[i];
//                break;
//        }
//    }
