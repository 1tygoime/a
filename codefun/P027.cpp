#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,count(0);
    cin >> n;
    for (long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
                cout << i;
                count++;
                break;
        }
    }
    if (count == 0) cout << "YES";
    return 0;
}
