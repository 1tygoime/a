#include <bits/stdc++.h>
using namespace std;

string tru(string a, string b){
    while (a.length() < b.length())
        a = "0" + a;
    while (a.length() > b.length())
        b = "0" + b;
    int nho(0);
    string res = "";
    int len = a.length()-1;
    for (int i = len; i >= 0 ;i--){
        int t = int(a[i]-'0') - int(b[i]-'0')-nho;
        if (t < 0){
            res = char(t+10+'0')+res;
            nho = 1;
        }
        else
            res = char(t+'0') + res;
    }
    while (res[0] == '0')
        res.erase(res.begin());
    return res;
}

int main() {
	string a,b;
	cin >>a >> b;
	cout << tru(a,b);
	return 0;
}
