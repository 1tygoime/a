#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[100005],n,max,SecondMax,location;
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    max = a[1];
    for (long long i = 0; i < n; i++)
        if (max < a[i]) max = a[i];
    for (long long i = 0; i < n; i++)
        if (a[i] != max){
            SecondMax = a[i];
            break;
        }
    for (long long i = 0; i < n; i++)
        if (a[i] != max && a[i] > SecondMax)
            SecondMax = a[i];
    for (long long i = 0; i < n; i++)
        if (a[i] == SecondMax){
            location = i;
            break;
        }
    cout << SecondMax << ' ' << location+1;
    return 0;
}