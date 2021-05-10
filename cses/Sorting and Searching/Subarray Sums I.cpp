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
    for (int i = 0; i < n; i++){
        s+=a[i];
        while (j<=i&&s>x){
            s-=a[j];
            j++;
        }
        if(s==x)
            res++;
    }
    cout<<res;
    return 0;
}
