#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x,res(0),s(0);
    cin >> n >> x;
    long long a[n];
    map<long long,int> ok;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++){
        s+=a[i];
        if(s==x)
            res++;
        if(ok.find(s-x)!=ok.end())
            res+= ok[s-x];
        ok[s]++;
    }
    cout<<res;
    return 0;
}
