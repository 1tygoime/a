/*
Xoa so phan biet co the lam 2 cach:
- Cach 1: Xoa truc tiep trong mang
- Cach 2: Dung mang danh dau
*/

#include <bits/stdc++.h>
using namespace std;

void Xoa(int a[], int &n, int location){
    for (int i = location + 1; i < n; i++)
        a[i - 1]= a[i];
    n--;
}

void Trung(int a[], int &n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] == a[j]){
                Xoa(a,n,j);
                j--;
            }
        }
    }
}

int main(){
    int a[100005],n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    Trung(a,n);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//    typedef long long ll;
//    ll a[100000],n,ma;
//    cin >> n;
//    for (ll i = 1; i <= n; i++) cin >> a[i];
//    ma = abs(a[0]-a[1]);
//    for (ll i = 1; i < n; i++){
//        for (ll j = i + 1; j <= n; j++)
//            if(abs(a[i]-a[j]) > ma) ma = abs(a[i]-a[j]);
//    }
//    cout << ma;
//    return 0;
//}
//    for (ll i = 1; i < n; i++){
//        for (ll j = i+1; j <= n; j++)
//            if ((a[i]*a[j]/__gcd(a[i],a[j])) <= k) cnt++;
//    }

//    long long t;
//    cin >> t;
//    for (long long i = 1; i < t; i++){
//        long long n, k, result(1),result1;
//        cin >> n >> k;
//        if (n % 2 == 0) result1 = (k-1)%6971;
//        else result1 = (1-k)%6971;
//        for (long long i = 1; i <= n; i++){
//            result *= ((k-1)%6971);
//        }
//        result %= 6971;
//        result += result1;
//        cout << result << '\n';
//    }
//    long long n, k, result(1),result1;
//        cin >> n >> k;
//        if (n % 2 == 0) result1 = (k-1)%6971;
//        else result1 = (1-k)%6971;
//        for (long long i = 1; i <= n; i++){
//            result *= ((k-1)%6971);
//        }
//        result %= 6971;
//        result += result1;
//        cout << result;

//bool CheckLength(string str){
//    long long count(0);
//    for (long long i = 0; i <= str.length(); i++){
//        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u') count++;
//        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U') count++;
//    }
//    if (count >= 4 && count <= 7) return true;
//    else return false;
//}
//
//long long main(){
//    string str;
//    while (getline(cin,str)){
//    string str1,str2,str3;
//    getline(cin,str1);
//    getline(cin,str2);
//    getline(cin,str3);
//    long long check(0);
//    if (CheckLength(str))
//    {
//        check++;
//        if(CheckLength(str1)){
//            check++;
//            if(CheckLength(str2)){
//                check++;
//                if(CheckLength(str3)){
//                    check++;
//                } else cout << "NO";
//            }
//            else cout << "NO";
//        }
//        else cout << "NO";
//    }
//    else cout << "NO";
//    if (check == 4) cout << "YES";
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//long long main(){
//    long long n,n1,a[100],b[100],c[100];
//    cin >> n;
//    for (long long i = 1; i <= n; i++){
//            cin >> a[i];
//            c[i] = a[i];
//    }
//    cin >> n1;
//    for (long long i = 1; i <= n1; i++){
//            cin >> b[i];
//            c[n+i] = b[i];
//    }
//    for (long long i = 1; i < n+n1; i++){
//            for (long long j = i + 1; j <= n + n1; j++){
//                if (c[i] > c[j]){
//                    long long temp = c[i];
//                    c[i] = c[j];
//                    c[j] = temp;
//                }
//            }
//    }
//    for (long long i = 1; i <= n+n1; i++)
//            cout << c[i] << ' ';
//    return 0;
//}
