/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

string s;

bool digit(){
    for (auto &c : s)
        if(c != ' ' && c != '-' && c != '.' && !isdigit(c))
            return 0;
    return 1;
}

bool abc(){
    for (auto &c : s)
        if (c != ' ' && !isalpha(c))
            return 0;
    return 1;
}

int main(){
    fast
    while(getline(cin,s)){
        if (int(s.find('?'))>=0)
            break;
        if(digit()){
            long double res(0.0),x;
            stringstream dig(s);
            while (dig >> x)
                res += x;
            cout << setprecision(6) << fixed << res << '\n';
        }
        else if(abc()){
            stringstream alphabet(s);
            string res="",tmp;
            while (alphabet >> tmp)
                res += tmp;
            cout << res << '\n';
        } else cout << "Error!\n";
    }
    return 0;
}
