/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/
#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
    int n,ma(1),cnt(1);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n-1; i++){
        if(a[i]<=a[i+1])
            cnt++;
        else{
            ma=max(ma,cnt);
            cnt=1;
        }
    }
    cout<<max(ma,cnt);
    return 0;
}
