#include <bits/stdc++.h>
using namespace std;

int n;
double sum = 0.0;
vector <int> v;

// so chu so cua N = ceil(log10(N))
// log(AB) = log(A)+log(B) => log(X!) = log(1)+log(2)+...+log(X)

int main(){
    cin >> n;
    for(int i = 1; ceil(sum) <= n; i++){
        sum += log10(i);
        if (ceil(sum) == n)
            v.push_back(i);
    }

    if(v.empty())
        cout << "NO";
    else{
        cout << v.size() << '\n';
        for(const int &c: v){
            cout << c << '\n';
        }
    }

    return 0;
}
