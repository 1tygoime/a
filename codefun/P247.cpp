#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    cin >> str >> n;
    for (int k = 1; k <= n; k++){
        int i,j;
        cin >> i >> j;
        swap(str[i-1],str[j-1]);
    }
    cout << str;
    return 0;
}