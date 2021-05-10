#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,odd,even,x;
	//odd:le, even:chan
	for(cin >> t; t--; ){
		odd=even=0;
		cin >> n;
		for (int i = 0; i < n; ++i){
			cin >> x;
			odd += (i % 2 && x % 2 == 0);
			even += (i % 2 == 0 && x %2);
		}
		cout << (odd == even ? even : -1) << '\n';
	}
	return 0;
}