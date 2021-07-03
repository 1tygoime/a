#include <bits/stdc++.h>
using namespace std;

float kc(float xa, float xb, float ya, float yb){
    float kq;
    kq = sqrt((xb - xa)*(xb - xa) + (yb - ya)*(yb - ya));
    return kq;
}

int main()
{
	float tong,a[100005],b[100005];
	long long n;
	cin >> n;
	for (long long i = 1; i <= n; i++){
        cin >> b[i] >> a[i];
	}
	tong = kc(a[1],a[n],b[1],b[n]);
	for (long long i = 1; i < n; i ++){
        tong += kc(a[i],a[i+1],b[i],b[i+1]);
	}
	cout << trunc(tong);
	return 0;
}
