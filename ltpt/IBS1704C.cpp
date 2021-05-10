#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j=0;
    long long x,res(0),s(0);
    cin >> n >> x;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int l = 0, r = 0; r < n; r++){
        s+=a[r];
        while(s>x){
                s-=a[l];
                l++;
        }

        res+=r-l+1;
    }
    cout<<res;
    return 0;
}
