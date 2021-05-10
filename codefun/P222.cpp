#include <bits/stdc++.h>
using namespace std;

int main(){
    string str,token;
    int n(0);
    getline(cin, str);
    stringstream ss(str);
    while (ss >> token) n++;
    cout << n;
    return 0;
}