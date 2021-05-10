#include <bits/stdc++.h>
using namespace std;

long long mu2(long long n){
    if (n == 0)
        return 1;
    long long res(1);
    while (n--)
        res*=2;
    return res;
}

long long gt(long long n){
    if (n == 0 || n == 1)
        return 1;
    long long res(1);
    while (n--)
        res*=n;
    return res;
}

int main(){
    long long m,n;
    string s;
    while (cin >> m >> n >> s){
        bool chk=false;
        // cac gioi han nho
        if (s=="On")
            chk=(n<=m);
        if (s == "Onlogn")
            chk= (n*log2(n) <= m);
        if (s == "On^(3/2)")
            chk = (pow(n,1.5)<=m);
        // max de la 10^9, n^2<=10^18 van ok
        if (s == "On^2")
            chk = ((n*n)<=m);
        if (s == "On^2logn")
            chk = (n*n*log2(n) <= m);
        // gioi han lon, luu y chi check den 10^9
        if (s == "On^3" && n <= 1000)
            chk=(n*n*log2(n) <= m);
        if (s == "On^4" && n <= 178)
            chk = (n*n*n*n <= m);
        if (s == "O2^n" && n <= 30)
            chk = (mu2(n) <= m);
        if (s == "On!" && n <= 13)
            chk = (gt(n) <= m);
        cout << (chk ? "AC \n" : "TLE \n");
    }
    return 0;
}
