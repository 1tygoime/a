#include <bits/stdc++.h>
using namespace std;

vector <int> v;
string s1, s2, s;

void Try(int i, int j, int k){
    if (i == s.size()){
        for(const int &c: v)
            cout << c;
        exit(0);
    }

    if (s[i] == s1[j]) {
        v[i] = 1;
        Try(i + 1, j + 1, k);
    }
    if (s[i] == s2[k]) {
        v[i] = 2;
        Try(i + 1, j, k + 1);
    }
}

int main(){
    cin >> s1 >> s2 >> s;
    v.resize(s.size());
    Try(0, 0, 0);
	return 0;
}
