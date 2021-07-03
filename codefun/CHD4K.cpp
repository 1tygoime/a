#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin >> m >> m >> m;
    if (m > 105)  cout << "Yes\nYes\nNo\nNo\nNo\nYes\nYes\nNo\nNo\nNo";
    if (m == 105) cout << "No\nNo\nNo\nYes\nYes\nYes\nNo\nNo\nYes\nYes";
    if (m < 105)  cout << "No\nYes";
    return 0;
}
