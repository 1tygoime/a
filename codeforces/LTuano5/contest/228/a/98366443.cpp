#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    int n=4;
    while(n--){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << 4-s.size();
    return 0;
}
