#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,a[100005],count(0);
    cin >> n;
    for (unsigned long long i = 1; i <= n; i++){
        cin >> a[i];
        if (sqrt(a[i]) == (unsigned long long)sqrt(a[i])) count++;
    }
     cout << count;
    return 0;
}