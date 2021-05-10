#include<bits/stdc++.h>
using namespace std;

void HoanVi(long long &a, long long &b){
    long long temp = a;
    a = b;
    b = temp;
}

void SXtang(long long arr[], long long n){
    for (long long i = 1; i <= n - 1; i++){
        for (long long j = i + 1; j <= n; j++){
            if (arr[i] > arr[j])
                    HoanVi(arr[i], arr[j]);
        }
    }
}

int main(){
    long long n,arr1[100005],arr2[100005];
    cin >> n;
    for (long long i = 1; i <= n; i++) cin >> arr1[i];
    for (long long i = 1; i <= n; i++) cin >> arr2[i];
    SXtang(arr1,n);
    SXtang(arr2,n);
    int check = 1;
    for (long long i = 1; i <= n; i++){
        if (arr1[i] == arr2[i])
            check = 1;
        else{
            check = 0;
            break;
        }
    }
    if (check == 1) cout << "YES";
        else cout << "NO";
    return 0;
}