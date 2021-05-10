#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,token;
    getline(cin,S);
    stringstream ss(S);
    while (ss >> token) {
    	cout << token << '\n';
    }
}