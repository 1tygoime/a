#include <bits/stdc++.h>
using namespace std;

bool CheckPT(long long a, long long b, long long c){
    if(a==0){
        if(b==0){
            if (c==0)
                return true;
            else
                return false;
        }
        else
            if (c%b==0)
                return true;
            else
                return false;
    }
    else{
        long long denta = b*b-4*a*c;
        if (denta < 0) return false;
        else{
            long double x1 = (-b + sqrt(denta))/(long double)(2*a);
            long double x2 = (-b - sqrt(denta))/(long double)(2*a);
            if (x1 == (long long)x1 && (x2 == (long long)x2))
                return true;
            else return false;
        }
    }
}

int main(){
    long long n,count(0);
    cin >> n;
    for (long long i = 1; i <= n; i++){
        long long a,b,c;
        cin >> a >> b >> c;
        if (CheckPT(a,b,c)) count++;
    }
    cout << count;
    return 0;
}
