/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool check = 0;
typedef vector <int> bignum;
bignum a,b;

bignum s2b(string s){
    bignum x;
    for(int i = s.size()-1; i >= 0; i--){
        x.push_back(s[i] - '0');
    }
    return x;
}

void inp(){
    string sa, sb;
    cin >> sa >> sb;
    a = s2b(sa); b = s2b(sb);
}

void display(bignum x){
    for (int i = x.size()-1; i >= 0; i--)
        cout << x[i];
}

bool operator <(bignum x,bignum y){
    if (x.size()!=y.size())
        return x.size() < y.size();
    for(int i = x.size() - 1; i >= 0; i--){
        if (x[i] > y[i])
            return false;
        if (x[i] < y[i])
            return true;
    }
    return false;
}

bool operator >(bignum x, bignum y){
    return y < x;
}

bignum operator +(bignum x, bignum y){
    int carry(0);
    x.resize(max(x.size(),y.size()));
    y.resize(max(x.size(),y.size()));
    for(int i = 0; i < x.size(); i++){
        x[i] += y[i] + carry;
        carry = x[i]>=10;
        x[i] =(carry?x[i]-10:x[i]);
    }
    if (carry) x.push_back(1);
    return x;
}

bignum operator -(bignum x, bignum y){
//    bool check(0);
    int carry(0);
    if (x < y){
        x.swap(y);
        check=1;
    }
    x.resize(max(x.size(),y.size()));
    y.resize(max(x.size(),y.size()));
    for(int i = 0; i < x.size(); i++){
        x[i]-=y[i]+carry;
        carry=x[i]<0;
        x[i] = (x[i] < 0 ? x[i]+10: x[i]);
    }
    while(x.back()==0 && x.size() > 1) x.pop_back();
    return x;
}

bignum multi1(bignum x, int y){
    int carry(0);
    for(int i = 0; i < x.size(); i++){
        x[i] = x[i] * y + carry;
        carry = x[i] / 10;
        x[i] = (x[i] >= 10 ? x[i]%10: x[i]);
    }
    if (carry) x.push_back(carry);
    return x;
}

bignum operator *(bignum x,bignum y){
    bignum res;
    int carry=-1;
    for(int i = 0; i < x.size(); i++){
        carry++;
        bignum tmp = multi1(y,x[i]);
        for(int j = 1; j <= carry; j++) tmp.insert(tmp.begin(),0);
        res=res+tmp;
//        carry++;
    }
    return res;
}

int main(){
    fast
    inp();
    display(a+b); cout << '\n';
    // for a-b
    bignum c=a-b;
    if (check) cout << '-';
    display(c); cout << '\n';
    display(a*b); cout << '\n';
    return 0;
}