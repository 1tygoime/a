#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
    Buoc 1: Tao mang fibo m phan tu
	Buoc 2: Tim so fibo lon nhat <= n trong day moi tao
	Buoc 3: n-=f[m];
	Lap buoc 2 den khi n = 0;
*/

ll f[100005],n;
int m;

// tao mang fibo m pt
void init(){
    f[0]=1;
    f[1]=1;
    m=1;
    while (f[m] + f[m-1]<=n){
        m++;
        f[m]=f[m-1]+f[m-2];
    }
}

// tim kiem nhi phan
int bin(long long x,int first,int last){
    int mid;
    bool found=false;
    mid=(first+last)/2;
    while ((first<last)&&(found==false)){
        if (x<f[mid])
            last=mid-1;
        else
            if(x>f[mid])
                first=mid+1;
        else
            found=true;
        mid = (first+last)/2;
    }
    if (f[mid] > x)
        return mid-1;
    else
        return mid;
}

int main(){
    int cnt(0);
    cin >> n;
    init();
    while (n-f[m] > 0){
        cnt++;
        n-=f[m];
        m=bin(n,0,m);
    }
    cout<<++cnt;
	return 0;
}
