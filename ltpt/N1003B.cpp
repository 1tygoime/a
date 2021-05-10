#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long k,gcd,cr;
    for (cin >> n >> k >> gcd; n > 1; n--){
        cin >> cr;
        gcd=__gcd(gcd,cr);
    }
    vector <long long> uoc;
    for (long long i = 1; i <= sqrt(gcd); i++){
        if (gcd % i == 0)
            if (gcd / i == i)
                uoc.push_back(i);
            else{
                uoc.push_back(i);
                uoc.push_back(gcd/i);
            }
    }
    sort(uoc.begin(),uoc.end());
    for(long long i = 1; i < uoc.size();i++)
        if(uoc[i] < k){
            cout << k/uoc[i]*uoc[i];
            return 0;
    }
    cout << 0;
    return 0;
}
