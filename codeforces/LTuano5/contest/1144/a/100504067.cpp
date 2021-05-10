#include <bits/stdc++.h>
using namespace std;
int t; string s;

void prod(){
	sort(s.begin(),s.end());
	for(int i = 0 ; i < s.size() - 1; i++){
		if ((char)(s[i] + 1) != s[i+1]){
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
}

int main(){
	
	for(cin >> t; t--; ){
		cin >> s;
		prod();
	}
	return 0;	
}