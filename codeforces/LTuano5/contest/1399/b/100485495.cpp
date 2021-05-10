#include <bits/stdc++.h>
#define orr for // may liet phim
#define candy first 
#define orange second 

using namespace std;
pair <int,int> a[100];
int main() {
	int t,n; cin >> t;
	while(t--){
		long long res(0);
		int mic(INT_MAX),mio(INT_MAX);
		cin >> n;
		orr(int i = 0; i < n; i++){
			cin >> a[i].candy;
			mic = min(mic,a[i].candy);
		}
		orr(int i = 0; i < n;i++){
			cin >> a[i].orange;
			mio = min(mio,a[i].orange);
		}
		orr (int i = 0; i < n; i++)
			res += max(a[i].candy-mic,a[i].orange - mio);
		cout << res << '\n';
	}
	return 0;
}