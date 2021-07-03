
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,res(0);
    cin>>n;
    if(n<10)
        cout << n;
    else{
        if (n<=99){
            cout<<9+(n-10+1)*2;
        }
        else if (n <= 999){
            cout<<189+(n-100+1)*3;
        }
        else if (n <= 9999){
            cout<<2889+(n-1000+1)*4;
        }
        else if (n <= 99999){
            cout<<38889+(n-10000+1)*5;
        }
        else if (n <= 999999){
            cout<<488889+(n-100000+1)*6;
        }
        else if (n <= 9999999){
            cout<<5888889+(n-1000000+1)*7;
        }
        else if (n <= 99999999){
            cout<<68888889+(n-10000000+1)*8;
        }
        else if (n <= 999999999){
            cout<<  +(n-100000000+1)*9;
        }
        else
            cout<<788888890+(n-100000000+1)*9; // limit 10^9
    }
    return 0;
}
