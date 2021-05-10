#include <bits/stdc++.h>
using namespace std;

unordered_map <string, string> um;

void copycode(){
	int n, m;
	for(cin >> n >> m; m--; ){
		string a,b;
		cin >> a >> b;
		if (b.size() >= a.size()) b=a;
		um[a] = b;
	}
	while(n--){
		string s;
		cin >> s;
		cout << um[s] << ' ';
	}
//	string s, token = "";
//	getline(cin, s);
//	stringstream ss(s);
//	while(ss >> token){
//		cout << um[token] << ' ';
//	}
}

int main() {
	copycode();
	return 0;
}