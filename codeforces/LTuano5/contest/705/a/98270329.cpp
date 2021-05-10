#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "I hate ";
    for(int i = 2 ; i <= n; i++)
        cout << (i%2?"that I hate ":"that I love ");
    cout<<"it";
    return 0;
}
