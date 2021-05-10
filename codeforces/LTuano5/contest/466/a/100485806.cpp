#include <bits/stdc++.h>
// may liet phim //
#define neu if
#define orr for  
///////end////////
/*
#define candy first 
#define orange second 
**/
using namespace std;

int main() {
	int n,m,b,a;
	cin >> n >> m >> a >> b;
	// ve db > ve thuong ==> all thuong
	neu(b >= 1LL*a*m)
		cout << n * a;
	// all db
	else neu(b <= 1LL * n % m * a){
		cout << 1LL * n / m * b + (n % m ? b : 0);
	}
	else cout << 1LL * n / m * b + n % m * a;
	return 0;
}