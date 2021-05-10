#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
const ll mod = 1e9 + 7;

ll a[25][25];
int n;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while(cin >> n){
		
		ll ma = LLONG_MIN;
		
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> a[i][j];
		
		for(int i = 0; i < n; i++){ // dong i
			ll t = 1;
			for(int j = 0; j < n - 3; j++){
				t = a[i][j] * a[i][j + 1] * a[i][j + 2] * a[i][j + 3];
				ma = max(ma, t);
				//cout << ma << ' ' << t << '\n';
			}
		}
		
		for(int i = 0; i < n; i++){ // cot i
			ll t;
			for(int j = 0; j < n - 3; j++){
				t = a[j][i] * a[j + 1][i] * a[j + 2][i] * a[j + 3][i];
				ma = max(ma, t);
			}
		}
		
		//cheo chinh
		vector <ll> cheo;
		for (int j = 0; j < n; j++){
	        int i = 0;
	        cheo.clear();
	        for (int k = 0; j + k < n; k++)
	            cheo.pb(a[i+k][j+k]);
	        if (cheo.size() >= 4){
	        	ll t = 1;
	        	for(int cc = 0; cc < cheo.size() - 3; cc++)
	        		t = cheo[cc] * cheo[cc + 1] * cheo[cc + 2] * cheo[cc + 3],
	        		ma = max(ma, t);
	        }
    	}
    	
    	for (int i = 1; i < n; i++){
	        int j = 0;
	        cheo.clear();
	        for (int k = 0; i + k < n; k++)
	        	cheo.pb(a[i+k][j+k]);
	        if (cheo.size() >= 4){
	        	ll t = 1;
	        	for(int cc = 0; cc < cheo.size() - 3; cc++)
	        		t = cheo[cc] * cheo[cc + 1] * cheo[cc + 2] * cheo[cc + 3],
	        		ma = max(ma, t);
	        }
    	}
		
		//cheo phu
		for (int i = 0; i < n; i++){
	        cheo.clear();
	        for (int k = 0; k <= i; k++)
	            cheo.pb(a[i-k][k]);
	        if (cheo.size() >= 4){
	        	ll t = 1;
	        	for(int cc = 0; cc < cheo.size() - 3; cc++)
	        		t = cheo[cc] * cheo[cc + 1] * cheo[cc + 2] * cheo[cc + 3],
	        		ma = max(ma, t);
	        }
	    }
	    
	    for (int j = 1; j < n; j++){
	    	cheo.clear();
	        for (int k = 0; j + k < n; k++)
	            cheo.pb(a[n-1-k][j+k]);
	        if (cheo.size() >= 4){
	        	ll t = 1;
	        	for(int cc = 0; cc < cheo.size() - 3; cc++)
	        		t = cheo[cc] * cheo[cc + 1] * cheo[cc + 2] * cheo[cc + 3],
	        		ma = max(ma, t);
	        }
	    }
		
		cout << ma << '\n';
		
	}
	return 0;
}