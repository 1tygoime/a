#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int cot[30], cc[30], cp[30], n, cnt;

void Try(int i){
    for(int j = 1; j <= n; j++){
        if (!cot[j] && !cc[i - j] && !cp[i + j]){
            cot[j] = cc[i - j] = cp[i + j] = 1;
            if (i == n)
                cnt++;
            else
                Try(i + 1);
            cot[j] = cc[i - j] = cp[i + j] = 0;
        }
    }
}

int main(){
    cin >> n;
    Try(1);
    cout<<cnt;
}
