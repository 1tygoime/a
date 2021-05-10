#include <bits/stdc++.h>
using namespace std;
int a[50],b[50],k,n;
int main() {
	int t;
	for(cin >> t; t--; ){
		int s=0;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
			cin >> b[i];
		sort(a,a+n); sort(b,b+n);
		for(int i = 0, j = n - 1; i < k; i++, j--)
			if (a[i] < b[j])
				swap(a[i],b[j]);
			else break;
		for (int i = 0 ; i < n ; i++)
			s+= a[i];
		cout << s << '\n';
	}
	return 0;
}