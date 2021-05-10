#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    while(cin >> n)
    {
        if(n % 2 == 0){
            if(n % 8 == 0 || n % 8 == 2)
                cout << 2;
            else
                cout << 4;
        }
        else{
            if(n % 8 == 3 || n %8 == 7)
                cout << 3;
            else
                if(n % 8 == 1)
                    cout << 1;
                else
                    cout << 5;
        }
        cout << '\n';
    }
    return 0;
}
