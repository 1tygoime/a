#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c(0),l(0);
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]%2)
            l++;
        else
            c++;
    }
    for(int i = 0; i < n; i++){
        if(l>c&&a[i]%2==0){
            cout<<++i;
            break;
        }
        else if(l<c&&a[i]%2){
            cout<<++i;
            break;
        }
    }
    return 0;
}
