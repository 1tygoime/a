#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int main(){
    //
    int i(0),j(0),fin(0);
    string str,word = "",a[225];
    getline(cin,str);
    while (str[j] != '\0'){
        if (str[j] == '/'){
            a[i] = word;
            word = "";
            i++;
        }
        else word = word + str[j];
        j++;
    }
    a[i] = word;
    int d = stoi(a[0]);
    int m = stoi(a[1]);
    int y = stoi(a[2]);
    if (m < 3){
        m+=12;
        y--;
    }
    int c = y/100;
    int k = y%100;
    int wd = (d+(k/4)+k+(c/4)+5*c+(13*(m+1)/5))%7;
    switch (wd){
        case 0: cout << "Sat";break;
        case 1: cout << "Sun";break;
        case 2: cout << "Mon";break;
        case 3: cout << "Tue";break;
        case 4: cout << "Wed";break;
        case 5: cout << "Thu";break;
        case 6: cout << "Fri";break;
    }
    return 0;
}
