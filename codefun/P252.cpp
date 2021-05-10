#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int main(){
    int i(0),j(0),fin(0);
    string str,word = "",a[225];
    getline(cin,str);
    while (str[j] != '\0'){
        if (str[j] == ' '){
            a[i] = word;
            word = "";
            i++;
        }
        else word = word + str[j];
        j++;
    }
    a[i] = word;
    cin >> fin;
    fin--;
    if (fin == i){
        string sub = a[fin].substr(0,a[fin].length()-1);
        cout << sub;
    }
    else cout << a[fin];
    return 0;
}
