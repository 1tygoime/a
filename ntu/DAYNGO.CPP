#include <bits/stdc++.h>
using namespace std;

int n, x[25];
set <string> s;

void Xuat(){
    string t = "";
    for(int i = 0; i < n; i++){
        if (x[i])
            t.push_back('(');
        else
            t.push_back(')');
    }
    int d = 0;
    for(int i = 0; i < t.size(); i++){
        if(t[i] == '(')
            d++;
        else
            d--;
        if (d < 0) return;
    }
    if (d == 0) s.insert(t);
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if (i == n - 1)
            Xuat();
        else
            Try(i + 1);
    }
}

int main(){

    cin >> n;
    Try(0);
    for(const string &c : s)
        cout << c << '\n';
    cout << s.size();
    return 0;
}
