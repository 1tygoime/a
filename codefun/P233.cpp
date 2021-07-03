#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    sort(str.begin(),str.end());
    reverse(str.begin(),str.end());
    cout << str << endl;
    reverse(str.begin(),str.end());
    bool zero = true;
    for(int i = 0; i < str.length(); i++)
        if(str[i] == '0') zero = true;
    else{
        swap(str[i],str[0]);
        break;
    }
    cout << str;
    return 0;
}
