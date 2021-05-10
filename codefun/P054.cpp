#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n;
    while (n %2 == 0){
        cout << "2 ";
        n /= 2;
    }
    for (int i = 3; i <= sqrt(a); i++){
        while (n%i == 0){
            cout << i << ' ';
            n /= i;
        }
    }
    if (n > 1) cout << n;
    return 0;
}
