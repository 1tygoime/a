#include <bits/stdc++.h>
using namespace std;

int bin(string s, int length){
    if (s.length() == length) return 1;
    if (s[s.length() - 1] == '0') return bin(s + "1", length);
    else return bin(s + "0", length) + bin(s + "1", length);
}

int main()
{
    int n;
    cin >> n;
    string s = "";
    cout << bin(s,n);
    return 0;
}
